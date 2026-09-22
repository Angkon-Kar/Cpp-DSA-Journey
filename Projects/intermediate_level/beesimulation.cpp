/*
    ============================================================
     ADVANCED BEEKEEPING SIMULATION (OOP Edition)
    ============================================================
    Ei code ta duita age r version (Flow Hive Time Simulation +
    Advanced Beekeeping Simulation) ke merge kore, full OOP
    architecture diye notun kore banano hoyeche.

    Class Hierarchy:
      Frame        -> StandardFrame, FlowFrame   (smallest unit)
      Box          -> BroodBox, FlowSuperBox     (holds frames)
      QueenBee     -> Hive er main driver (age & health based growth)
      Hive         -> Population + Honey + Boxes + Queen + Disease
      Simulation   -> Beekeeper controller (money, week, multi-hive)

    Compile:  g++ -std=c++17 -O2 -o beehive beehive_simulation.cpp
    Run:      ./beehive
    ============================================================
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// ================= SEASON =================
enum Season { SPRING, SUMMER, AUTUMN, WINTER };

string seasonName(Season s) {
    switch (s) {
        case SPRING: return "Spring";
        case SUMMER: return "Summer";
        case AUTUMN: return "Autumn";
        case WINTER: return "Winter";
    }
    return "Unknown";
}

// ================= FRAME (smallest unit) =================
// Standard Frame -> brood/population er jonno
// Flow Frame     -> automated honey collection er jonno
class Frame {
protected:
    string type;
public:
    explicit Frame(string t) : type(std::move(t)) {}
    virtual ~Frame() = default;
    string getType() const { return type; }
};

class StandardFrame : public Frame {
public:
    StandardFrame() : Frame("Standard") {}
    static const int CAPACITY = 2500; // koto ta bee ek frame e thakte pare
};

class FlowFrame : public Frame {
public:
    FlowFrame() : Frame("Flow") {}
    static constexpr float HONEY_CAPACITY = 1.8f; // kg, ek frame a max modhu
};

// ================= BOX (frame gulor container) =================
class Box {
protected:
    int frameCount;
public:
    explicit Box(int frames) : frameCount(frames) {}
    virtual ~Box() = default;
    int getFrameCount() const { return frameCount; }
};

class BroodBox : public Box {
public:
    static const int FRAMES_PER_BOX = 10;
    BroodBox() : Box(FRAMES_PER_BOX) {}
    int getPopulationCapacity() const { return frameCount * StandardFrame::CAPACITY; }
};

class FlowSuperBox : public Box {
public:
    static const int FRAMES_PER_BOX = 6;
    FlowSuperBox() : Box(FRAMES_PER_BOX) {}
    float getHoneyCapacity() const { return frameCount * FlowFrame::HONEY_CAPACITY; }
};

// ================= QUEEN BEE =================
class QueenBee {
private:
    int ageWeeks;
    int health; // 0 - 100

public:
    QueenBee() : ageWeeks(0), health(100) {}

    void ageOneWeek() {
        ageWeeks++;
        // 2 bochor (104 week) er pore queen purono hote thake
        if (ageWeeks > 104 && health > 0) health -= 1;
    }

    int getAge() const { return ageWeeks; }
    int getHealth() const { return health; }
    bool isDead() const { return health <= 0; }

    void damageHealth(int amount) {
        health -= amount;
        if (health < 0) health = 0;
    }

    // 0.0 (dead) theke 1.0 (fully healthy) growth multiplier
    float getGrowthFactor() const {
        if (isDead()) return 0.0f;
        return health / 100.0f;
    }

    void replace() { // notun queen kena (requeen)
        ageWeeks = 0;
        health = 100;
    }
};

// ================= HIVE =================
class Hive {
private:
    int id;
    int beePopulation;
    float honeyAmount;
    QueenBee queen;
    vector<BroodBox> broodBoxes;
    vector<FlowSuperBox> superBoxes;
    float varroaLevel; // 0 - 100, disease severity

public:
    Hive(int hiveId, int initialPop)
        : id(hiveId), beePopulation(initialPop), honeyAmount(0.0f), varroaLevel(0.0f) {
        broodBoxes.push_back(BroodBox());
        superBoxes.push_back(FlowSuperBox());
    }

    int getId() const { return id; }
    int getPopulation() const { return beePopulation; }
    float getHoney() const { return honeyAmount; }
    float getVarroaLevel() const { return varroaLevel; }
    QueenBee& getQueen() { return queen; }

    int getMaxPopulation() const {
        int total = 0;
        for (const auto &b : broodBoxes) total += b.getPopulationCapacity();
        return total;
    }

    float getMaxHoneyCapacity() const {
        float total = 0.0f;
        for (const auto &s : superBoxes) total += s.getHoneyCapacity();
        return total;
    }

    int getBroodBoxCount() const { return (int)broodBoxes.size(); }
    int getSuperBoxCount() const { return (int)superBoxes.size(); }

    void addBroodBox() { broodBoxes.push_back(BroodBox()); }
    void addSuperBox() { superBoxes.push_back(FlowSuperBox()); }

    bool removeBroodBox() { // splitting er jonno
        if (broodBoxes.size() <= 1) return false;
        broodBoxes.pop_back();
        return true;
    }

    void setPopulation(int p) { beePopulation = p; }

    // ---- Weekly Progression ----
    void weeklyUpdate(Season season, bool &starvationEvent, bool &swarmEvent, bool &mitesEvent) {
        starvationEvent = false;
        swarmEvent = false;
        mitesEvent = false;

        queen.ageOneWeek();
        int maxPop = getMaxPopulation();
        float maxHoney = getMaxHoneyCapacity();

        // ---- SWARMING (Spring + overcrowded hoile) ----
        if (season == SPRING && maxPop > 0 && beePopulation >= maxPop - (maxPop / 10)) {
            beePopulation /= 2;
            swarmEvent = true;
        }

        // ---- Varroa Mite random attack ----
        if (varroaLevel < 100.0f) {
            int chance = rand() % 100;
            if (chance < 8) { // 8% shomvabona protti soptahe
                varroaLevel += 5 + (rand() % 10);
                if (varroaLevel > 100.0f) varroaLevel = 100.0f;
                mitesEvent = true;
            }
        }

        float mitesPenalty = 1.0f - (varroaLevel / 200.0f); // max 50% penalty
        float queenFactor = queen.getGrowthFactor();

        float growthRate = 0.0f;
        float honeyPerThousandBees = 0.0f;

        switch (season) {
            case SPRING:
                growthRate = 0.20f;
                honeyPerThousandBees = 0.25f;
                break;
            case SUMMER:
            case AUTUMN:
                growthRate = 0.10f;
                honeyPerThousandBees = 0.20f;
                break;
            case WINTER:
                growthRate = -0.05f;
                honeyPerThousandBees = 0.0f;
                break;
        }

        growthRate *= queenFactor * mitesPenalty;

        if (season != WINTER) {
            if (beePopulation < maxPop) {
                beePopulation += (int)(beePopulation * growthRate);
            }
            float production = (beePopulation / 1000.0f) * honeyPerThousandBees * mitesPenalty;
            honeyAmount += production;
        } else {
            beePopulation += (int)(beePopulation * growthRate); // growthRate already negative
            honeyAmount -= 2.0f; // bees eat stored honey to survive
            if (honeyAmount < 0.0f) {
                honeyAmount = 0.0f;
                beePopulation -= (int)(beePopulation * 0.15f); // starvation death
                starvationEvent = true;
            }
        }

        if (beePopulation > maxPop) beePopulation = maxPop;
        if (beePopulation < 0) beePopulation = 0;
        if (honeyAmount > maxHoney) honeyAmount = maxHoney;
        if (honeyAmount < 0.0f) honeyAmount = 0.0f;
    }

    float harvest() {
        float harvested = honeyAmount;
        honeyAmount = 0.0f;
        return harvested;
    }

    void treatMites() {
        varroaLevel -= 40.0f;
        if (varroaLevel < 0.0f) varroaLevel = 0.0f;
    }

    void feedSugarSyrup() {
        honeyAmount += 3.0f;
        float maxHoney = getMaxHoneyCapacity();
        if (honeyAmount > maxHoney) honeyAmount = maxHoney;
    }

    void printStatus() const {
        cout << "  Hive #" << id << " | Queen Age: " << queen.getAge()
             << "wk (Health: " << queen.getHealth() << "%)"
             << (queen.isDead() ? "  [QUEEN DEAD - REQUEEN NEEDED!]" : "") << "\n";
        cout << "    Population : " << beePopulation << " / " << getMaxPopulation() << "\n";
        cout << "    Honey      : " << fixed << setprecision(2) << honeyAmount
             << "kg / " << getMaxHoneyCapacity() << "kg\n";
        cout << "    Brood Boxes: " << broodBoxes.size()
             << " | Flow Supers: " << superBoxes.size() << "\n";
        cout << "    Varroa Mite Level: " << fixed << setprecision(1) << varroaLevel << "%";
        if (varroaLevel >= 50.0f) cout << "  [DANGER! Treat Immediately]";
        cout << "\n";
    }
};

// ================= SIMULATION (Beekeeper Controller) =================
class Simulation {
private:
    int week;
    float money;
    vector<Hive> hives;
    int nextHiveId;
    bool gameOver;

    const float HONEY_PRICE      = 12.0f;
    const float BROOD_BOX_COST   = 40.0f;
    const float SUPER_BOX_COST   = 35.0f;
    const float MEDICINE_COST    = 25.0f;
    const float SYRUP_COST       = 10.0f;
    const float REQUEEN_COST     = 30.0f;
    const int   SPLIT_MIN_POP    = 15000;

public:
    Simulation() : week(1), money(50.0f), nextHiveId(2), gameOver(false) {
        srand((unsigned)time(nullptr));
        hives.push_back(Hive(1, 10000));
    }

    Season getSeason() const { return (Season)(((week - 1) / 4) % 4); }

    void run() {
        cout << "==========================================\n";
        cout << "     ADVANCED BEEKEEPING SIMULATION (OOP)\n";
        cout << "==========================================\n";

        while (true) {
            if (gameOver) {
                cout << "\n[GAME OVER] Shob hive collapse hoye geche. Simulation shesh.\n";
                break;
            }

            Season season = getSeason();
            printGlobalStatus(season);

            cout << "\n===== ACTION MENU =====\n";
            cout << "1. Advance 1 Week\n";
            cout << "2. Harvest & Sell Honey ($" << HONEY_PRICE << "/kg)\n";
            cout << "3. Buy Brood Box ($" << BROOD_BOX_COST << ")\n";
            cout << "4. Buy Flow Super Box ($" << SUPER_BOX_COST << ")\n";
            cout << "5. Buy Medicine - Treat Varroa Mites ($" << MEDICINE_COST << ")\n";
            cout << "6. Feed Sugar Syrup ($" << SYRUP_COST << ", winter emergency)\n";
            cout << "7. Split Hive (Breeding, needs >1 Brood Box & "
                 << SPLIT_MIN_POP << "+ bees)\n";
            cout << "8. Requeen Hive ($" << REQUEEN_COST << ")\n";
            cout << "0. Exit Simulation\n";
            cout << ">> Select: ";

            int choice;
            if (!(cin >> choice)) break;

            if (choice == 0) {
                cout << "\nSimulation Ended. Final Money: $" << fixed << setprecision(2) << money << "\n";
                break;
            }
            else if (choice == 1) advanceWeek();
            else if (choice == 2) harvestAndSell();
            else if (choice == 3) buyBroodBox();
            else if (choice == 4) buySuperBox();
            else if (choice == 5) treatMites();
            else if (choice == 6) feedSyrup();
            else if (choice == 7) splitHive();
            else if (choice == 8) requeenHive();
            else cout << "\n[!] Invalid choice.\n";
        }
    }

private:
    Hive* selectHive() {
        if (hives.empty()) return nullptr;
        if (hives.size() == 1) return &hives[0];

        cout << "Select Hive ID (";
        for (size_t i = 0; i < hives.size(); i++) {
            cout << hives[i].getId();
            if (i + 1 < hives.size()) cout << ", ";
        }
        cout << "): ";
        int id;
        cin >> id;
        for (auto &h : hives) {
            if (h.getId() == id) return &h;
        }
        cout << "[!] Invalid ID, defaulting to first hive.\n";
        return &hives[0];
    }

    void printGlobalStatus(Season season) {
        cout << "\n[ Week: " << week << " | Season: " << seasonName(season)
             << " | Money: $" << fixed << setprecision(2) << money << " ]\n";
        cout << "------------------------------------------\n";
        for (const auto &h : hives) h.printStatus();
        cout << "------------------------------------------\n";
    }

    void advanceWeek() {
        Season season = getSeason();
        week++;

        for (auto &h : hives) {
            bool starve, swarm, mites;
            h.weeklyUpdate(season, starve, swarm, mites);
            if (swarm) cout << "\n[WARNING] Hive #" << h.getId()
                             << " SWARMED! 50% bees lost (overcrowded in Spring).\n";
            if (mites) cout << "\n[ALERT] Hive #" << h.getId()
                             << " detected Varroa Mite infestation! Treat it soon.\n";
            if (starve) cout << "\n[CRITICAL] Hive #" << h.getId()
                              << " ran out of honey - bees STARVED! Feed sugar syrup in winter.\n";
            if (h.getQueen().isDead()) cout << "\n[FATAL] Hive #" << h.getId()
                                             << "'s Queen has died! Growth halted until requeened.\n";
        }

        // Collapsed hive gulo (0 population) shore felo
        vector<Hive> survivors;
        for (auto &h : hives) {
            if (h.getPopulation() > 0) {
                survivors.push_back(std::move(h));
            } else {
                cout << "\n[COLLAPSE] Hive #" << h.getId() << " has collapsed (0 bees left)!\n";
            }
        }
        hives = std::move(survivors);

        if (hives.empty()) gameOver = true;

        cout << "\n=> 1 week passed.\n";
    }

    void harvestAndSell() {
        Hive* h = selectHive();
        if (!h) return;
        float harvested = h->harvest();
        if (harvested <= 0.0f) {
            cout << "\n=> No honey to harvest in this hive.\n";
            return;
        }
        float earned = harvested * HONEY_PRICE;
        money += earned;
        cout << "\n=> Harvested " << fixed << setprecision(2) << harvested
             << "kg honey. Sold for $" << earned << "!\n";
    }

    void buyBroodBox() {
        if (money < BROOD_BOX_COST) { cout << "\n[!] Not enough money.\n"; return; }
        Hive* h = selectHive();
        if (!h) return;
        money -= BROOD_BOX_COST;
        h->addBroodBox();
        cout << "\n=> Bought Brood Box for Hive #" << h->getId() << ". Capacity increased.\n";
    }

    void buySuperBox() {
        if (money < SUPER_BOX_COST) { cout << "\n[!] Not enough money.\n"; return; }
        Hive* h = selectHive();
        if (!h) return;
        money -= SUPER_BOX_COST;
        h->addSuperBox();
        cout << "\n=> Bought Flow Super Box for Hive #" << h->getId() << ". Honey capacity increased.\n";
    }

    void treatMites() {
        if (money < MEDICINE_COST) { cout << "\n[!] Not enough money.\n"; return; }
        Hive* h = selectHive();
        if (!h) return;
        if (h->getVarroaLevel() <= 0.0f) {
            cout << "\n=> This hive has no mite infestation right now.\n";
            return;
        }
        money -= MEDICINE_COST;
        h->treatMites();
        cout << "\n=> Treated Hive #" << h->getId() << " with medicine. Mite level reduced.\n";
    }

    void feedSyrup() {
        if (money < SYRUP_COST) { cout << "\n[!] Not enough money for sugar syrup.\n"; return; }
        Hive* h = selectHive();
        if (!h) return;
        money -= SYRUP_COST;
        h->feedSugarSyrup();
        cout << "\n=> Fed Sugar Syrup to Hive #" << h->getId() << ". Emergency food added.\n";
    }

    void requeenHive() {
        if (money < REQUEEN_COST) { cout << "\n[!] Not enough money.\n"; return; }
        Hive* h = selectHive();
        if (!h) return;
        money -= REQUEEN_COST;
        h->getQueen().replace();
        cout << "\n=> Bought a new Queen Bee for Hive #" << h->getId()
             << "! Fresh & healthy (Age 0, Health 100%).\n";
    }

    void splitHive() {
        Hive* h = selectHive();
        if (!h) return;
        if (h->getBroodBoxCount() <= 1 || h->getPopulation() < SPLIT_MIN_POP) {
            cout << "\n=> Failed! Need more than 1 Brood Box and at least "
                 << SPLIT_MIN_POP << " bees to safely split.\n";
            return;
        }
        h->removeBroodBox();
        int newPop = h->getPopulation() / 2;
        h->setPopulation(h->getPopulation() - newPop);
        int originalId = h->getId();

        hives.push_back(Hive(nextHiveId, newPop));
        int newId = nextHiveId;
        nextHiveId++;

        cout << "\n=> Success! Split Hive #" << originalId << " -> New Hive #"
             << newId << " created with " << newPop << " bees!\n";
    }
};

// ================= MAIN =================
int main() {
    Simulation sim;
    sim.run();
    return 0;
}