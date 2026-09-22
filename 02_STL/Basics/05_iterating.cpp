/*
 * Concept: The "Glue" between Containers and Algorithms
 * * Iterators are central to generic programming because they provide a common 
 * interface for any arbitrary container type[cite: 11103, 11107].
 * * Hierarchy of Iterators (from least to most powerful)[cite: 6169, 11131]:
 * 1. Input/Output Iterators: Read or write values in a forward direction once.
 * 2. Forward Iterators: Read/write forward; can traverse the same range multiple times.
 * 3. Bidirectional Iterators: Can move both forward (++) and backward (--)[cite: 6206, 9665].
 * (Used by: list, set, map)
 * 4. Random Access Iterators: Support pointer arithmetic (+, -, <, >, [])[cite: 6230, 9699].
 * (Used by: vector, deque, array)
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Iterate using a range-based for loop.
    cout << "Elements (range-based loop): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Iterate using a traditional for loop with an index.
    cout << "Elements (indexed loop): ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Elements (range-based loop): 10 20 30 40 50 
Elements (indexed loop): 10 20 30 40 50
*/