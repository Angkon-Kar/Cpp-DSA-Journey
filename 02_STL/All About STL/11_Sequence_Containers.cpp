#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>

/**
 * Demonstrates Sequential Containers: Vector, Deque, and List.
 * Element order in these is based on insertion time/place, not value[cite: 6097, 11112].
 */
void demonstrateSequenceContainers() {
    // 1. Vector: Dynamic array, efficient end-insertion [cite: 6098, 12082]
    std::vector<std::string> vec = {"C++", "Python"};
    vec.push_back("Java"); // Adds to end
    
    // 2. Deque: Double-ended queue, efficient front/back insertion [cite: 6104, 10833]
    std::deque<int> dq = {2, 3};
    dq.push_front(1); // Efficient front insertion
    dq.push_back(4);  // Efficient back insertion
    
    // 3. List: Doubly-linked list, constant time insert/delete anywhere [cite: 6115, 11567]
    std::list<int> myList = {10, 20, 30};
    auto it = myList.begin();
    std::advance(it, 1); // Move to second element
    myList.insert(it, 15); // Constant time insertion
}

int main() {
    std::cout << "Sequence Containers Initialized." << std::endl;
    demonstrateSequenceContainers();
    return 0;
}