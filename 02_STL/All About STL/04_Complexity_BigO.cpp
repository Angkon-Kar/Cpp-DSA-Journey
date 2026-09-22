//  04_Complexity_BigO.cpp

/*
📈 Complexity & Big O Notation
Big O notation is a mathematical representation used to describe the efficiency of algorithms in terms of time and space.
It provides an upper bound on the growth rate of an algorithm's running time or memory usage as the input size increases.

Common Complexities:
O(1) - Constant time
O(log n) - Logarithmic time
O(n) - Linear time
O(n log n) - Linearithmic time
O(n^2) - Quadratic time
O(2^n) - Exponential time
O(n!) - Factorial time

Understanding complexity helps in choosing the right algorithm and data structure for a problem.
*/

/*

📦 Containers and Their Complexities

Vector =
Random access: O(1)
Insert at end: Amortized O(1)
Insert/erase in middle: O(n)

List =
Insert/erase at known position: O(1)
Random access: O(n)

Deque =
Random access: O(1)
Insert/erase at ends: O(1)

Set / Map (balanced BST) =
Insert/find/erase: O(log n)


unordered_set / unordered_map (hash table) =
Average insert/find/erase: O(1)
Worst-case: O(n) (rare)

🔗 Iterators and Their Role
    Iterators abstract access, but their category determines algorithm efficiency:

Random Access (vector, deque): enables O(1) jumps, required for sort.
Bidirectional (list, set, map): supports forward/backward traversal, but not random jumps.
Forward/Input/Output: limited operations, used in streaming-like contexts.


👉 Choosing the right container means choosing the right iterator category, which in turn unlocks efficient algorithms.

⚙️ Algorithms and Their Complexities

sort: O(n log n) (requires random access iterators).
find: O(n) for linear containers, O(log n) for ordered associative containers, O(1) average for unordered containers.
accumulate: O(n) (linear scan).
binary_search: O(log n) (requires sorted data + random access iterators).

🎯 Putting It Together
Your code snippet is spot on: complexity is the compass for STL usage.
For example:
Need fast lookups → unordered_map (average O(1)).
Need sorted order → set or map (O(log n)).
Need fast random access → vector (O(1)).
Need frequent insertions in middle → list (O(1) at position).
*/