//  03_STL_Features_Containers_Iterators_Algorithms.cpp
/*
📦 Containers
Containers are data structures that store collections of objects. STL provides several types:
Sequence Containers: Maintain order of elements.
vector (dynamic array)
deque (double-ended queue)
list (doubly linked list)
Associative Containers: Store sorted key-value pairs.
set, multiset
map, multimap
Unordered Containers (hash-based, C++11 onwards):
unordered_set, unordered_map

👉 Each container is generic, meaning you can store any type (primitive or user-defined).
🔗 Iterators
Iterators act like pointers, providing a uniform way to traverse containers.
Types of Iterators:
Input Iterator (read-only, single-pass)
Output Iterator (write-only, single-pass)
Forward Iterator (multi-pass, read/write)
Bidirectional Iterator (move both directions)
Random Access Iterator (jump to any element, like in vector)

👉 Iterators decouple algorithms from containers. For example, sort doesn’t care if it’s a vector or deque—it just needs random access iterators.
⚙️ Algorithms
STL provides a rich set of generic algorithms that operate on ranges defined by iterators.
Sorting & Searching: sort, binary_search, find
Manipulation: copy, swap, transform
Numeric: accumulate, inner_product
Set Operations: set_union, set_intersection

👉 Algorithms are highly optimized and tested, saving you from reinventing the wheel.
🎯 How They Work Together
The beauty of STL is in the synergy:
Containers hold data.
Iterators provide access.
Algorithms process data.

*/

// Example:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 2, 7, 1, 3};
    sort(v.begin(), v.end()); // Algorithm + Iterators + Container

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
}

// Output: 1 2 3 4 7

/*
🚀 Key Features of STL
Generic: Works with any type.

Efficient: Optimized implementations.

Extensible: You can define custom types and still use STL.

Consistent: Unified design across containers, iterators, and algorithms.
*/