#include <iostream>
#include <set>
#include <map>
#include <string>

/**
 * Demonstrates Associative Containers: Set and Map.
 * Elements are sorted automatically based on keys (Red-Black Trees)[cite: 6097, 11839].
 */
int main() {
    // Set: Collection of unique keys [cite: 6122, 10861]
    std::set<int> uniqueSet;
    uniqueSet.insert(10);
    uniqueSet.insert(20);
    uniqueSet.insert(10); // Duplicate ignored

    // Map: Key-Value pairs [cite: 6144, 11804]
    std::map<std::string, int> ageMap;
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;

    std::cout << "Bob's age: " << ageMap["Bob"] << std::endl;
    return 0;
}