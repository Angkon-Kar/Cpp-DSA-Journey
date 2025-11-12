// 09_STL_Pair_Helper_Class.cpp
//
// The C++ Standard Template Library
// Douglas C. Schmidt
// Vanderbilt University
// February 12, 2014
//
// STL Pair Helper Class
// • This template group is the basis for the map & set associative containers because it stores (potentially) heterogeneous pairs of data together
// • A pair binds a key (known as the first element) with an associated value (known as the second element)

#include <iostream> // For std::cout
#include <utility>  // For std::pair

// The struct pair definition provided in the slide is a simplified example.
// In real C++, you would just use std::pair.
/*
template <typename T, typename U>
struct pair {
    // Data members
    T first;
    U second;

    // Default constructor
    pair() {}

    // Constructor from values
    pair(const T& t, const U& u) : first(t), second(u) {}
};
*/

// Pair equivalence comparison operator (simplified example from slide)
// In real C++, std::pair has these operators overloaded.
/*
template <typename T, typename U>
inline bool operator==(const pair<T, U>& lhs, const pair<T, U>& rhs) {
    return lhs.first == rhs.first && lhs.second == rhs.second;
}

// Pair less than comparison operator (simplified example from slide)
// In real C++, std::pair has these operators overloaded.
template <typename T, typename U>
inline bool operator<(const pair<T, U>& lhs, const pair<T, U>& rhs) {
    return lhs.first < rhs.first || (!(rhs.first < lhs.first) && lhs.second < rhs.second);
}
*/

int main() {
    // Create std::pair objects
    std::pair<int, std::string> p1(1, "apple");
    std::pair<int, std::string> p2(2, "banana");
    std::pair<int, std::string> p3(1, "apple");

    // Accessing elements
    std::cout << "p1: (" << p1.first << ", " << p1.second << ")" << std::endl;
    std::cout << "p2: (" << p2.first << ", " << p2.second << ")" << std::endl;

    // Comparing pairs
    std::cout << "p1 == p2: " << (p1 == p2 ? "true" : "false") << std::endl;
    std::cout << "p1 == p3: " << (p1 == p3 ? "true" : "false") << std::endl;
    std::cout << "p1 < p2: " << (p1 < p2 ? "true" : "false") << std::endl;

    // Using std::make_pair for convenience
    auto p4 = std::make_pair("hello", 123);
    std::cout << "p4: (" << p4.first << ", " << p4.second << ")" << std::endl;

    return 0;
}

