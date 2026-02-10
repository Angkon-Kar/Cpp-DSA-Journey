#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread> // For sleep
#include <chrono> // For time
#include <string>

using namespace std;

// --- CONFIGURATION ---
const int MAX_HEALTH = 100;
const int DAMAGE_NORMAL = 20;
const int DAMAGE_CRIT = 40;

// --- COLORS ---
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string BOLD = "\033[1m";

// --- UTILITY: TYPEWRITER EFFECT ---
// Prints text one character at a time for a "retro" feel
void typeText(string text, int speed = 30) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
    cout << endl;
}

// --- UTILITY: HEALTH BAR ---
void drawHealthBar(int current, int max, string color) {
    int totalBars = 20;
    // Calculate how many bars to fill based on percentage
    double percentage = (double)current / max;
    int filledBars = (int)(percentage * totalBars);

    cout << color << " [";
    for (int i = 0; i < totalBars; ++i) {
        if (i < filledBars) cout << "|"; // Filled part
        else cout << " ";               // Empty part
    }
    cout << "] " << current << "/" << max << " HP" << RESET << endl;
}

// --- ASCII ART OBJECTS ---
void printStone() {
    cout << "      _____\n    _/     \\_\n   /         \\\n   \\_       _/\n     \\_____/   (Stone)\n";
}
void printPaper() {
    cout << "      _______\n     |  ____ |\n     | |    ||\n     | |____||\n     |_______| (Paper)\n";
}
void printScissors() {
    cout << "      _      _\n     (_)    (_)\n       \\    /\n        \\  /\n         \\/\n         /\\\n        /  \\\n       /    \\  (Scissors)\n";
}

void showObject(int choice) {
    if (choice == 1) printStone();
    else if (choice == 2) printPaper();
    else if (choice == 3) printScissors();
}

string getName(int choice) {
    if (choice == 1) return "STONE";
    if (choice == 2) return "PAPER";
    if (choice == 3) return "SCISSORS";
    return "UNKNOWN";
}

int main() {
    srand(time(0));

    int playerHealth = MAX_HEALTH;
    int cpuHealth = MAX_HEALTH;
    int userChoice, cpuChoice;

    system("cls"); // Clear screen

    // Intro Sequence
    cout << BLUE << "========================================" << endl;
    typeText("INITIALIZING BATTLE PROTOCOLS...", 40);
    typeText("WARNING: OPPONENT 'THE DARK AI' DETECTED.", 40);
    cout << "========================================" << RESET << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));

    // MAIN GAME LOOP
    while (playerHealth > 0 && cpuHealth > 0) {
        
        system("cls"); // Clear screen for fresh round

        // 1. DISPLAY HUD (Heads Up Display)
        cout << "\n" << GREEN << "YOU (HERO)" << RESET << endl;
        drawHealthBar(playerHealth, MAX_HEALTH, GREEN);
        
        cout << "\n" << RED << "THE DARK AI (BOSS)" << RESET << endl;
        drawHealthBar(cpuHealth, MAX_HEALTH, RED);
        
        cout << "\n----------------------------------------" << endl;
        cout << "WEAPON SELECTION: [1] Stone  [2] Paper  [3] Scissors" << endl;
        cout << "Action: ";
        
        cin >> userChoice;

        // Input Validation
        if (cin.fail() || userChoice < 1 || userChoice > 3) {
            cin.clear(); cin.ignore(1000, '\n');
            continue; 
        }

        // 2. ANIMATION
        cout << "\nBattle engaging";
        for(int i=0; i<3; i++) { cout << "."; this_thread::sleep_for(chrono::milliseconds(300)); }
        cout << endl;

        cpuChoice = (rand() % 3) + 1;

        // 3. SHOWDOWN
        cout << GREEN << "\nYou used: " << getName(userChoice) << RESET << endl;
        showObject(userChoice);
        
        cout << RED << "\nBoss used: " << getName(cpuChoice) << RESET << endl;
        showObject(cpuChoice);

        // 4. CALCULATE DAMAGE
        cout << "\n" << BOLD << "RESULT: " << RESET;
        
        if (userChoice == cpuChoice) {
            cout << YELLOW << "Attack blocked! (It's a Draw)" << RESET << endl;
        }
        else if ((userChoice == 1 && cpuChoice == 3) || 
                 (userChoice == 2 && cpuChoice == 1) || 
                 (userChoice == 3 && cpuChoice == 2)) {
            
            // Critical Hit Calculation (20% Chance)
            bool isCrit = (rand() % 5) == 0; 
            int dmg = isCrit ? DAMAGE_CRIT : DAMAGE_NORMAL;

            if (isCrit) {
                cout << GREEN << "CRITICAL HIT!!! You dealt " << dmg << " damage!" << RESET << endl;
            } else {
                cout << GREEN << "You hit the Boss! Dealt " << dmg << " damage." << RESET << endl;
            }
            cpuHealth -= dmg;
        } 
        else {
             // Critical Hit for Boss (20% Chance)
            bool isCrit = (rand() % 5) == 0; 
            int dmg = isCrit ? DAMAGE_CRIT : DAMAGE_NORMAL;

            if (isCrit) {
                cout << RED << "CRITICAL HIT!!! Boss dealt " << dmg << " damage!" << RESET << endl;
            } else {
                cout << RED << "You got hit! Took " << dmg << " damage." << RESET << endl;
            }
            playerHealth -= dmg;
        }

        // Clamp health to 0 if negative
        if (playerHealth < 0) playerHealth = 0;
        if (cpuHealth < 0) cpuHealth = 0;

        cout << "\n(Press Enter to continue fight...)";
        cin.ignore(); cin.get();
    }

    // END GAME SCREEN
    system("cls");
    cout << "\n\n";
    if (playerHealth > 0) {
        cout << GREEN << "########################################" << endl;
        cout << "         MISSION ACCOMPLISHED           " << endl;
        cout << "       THE DARK AI WAS DEFEATED.        " << endl;
        cout << "########################################" << RESET << endl;
    } else {
        cout << RED << "########################################" << endl;
        cout << "             MISSION FAILED             " << endl;
        cout << "          SYSTEM SHUTTING DOWN...       " << endl;
        cout << "########################################" << RESET << endl;
    }

    return 0;
}