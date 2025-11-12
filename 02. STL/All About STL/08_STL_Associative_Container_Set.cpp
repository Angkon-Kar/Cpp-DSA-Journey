// 08_STL_Associative_Container_Set.cpp
//
// The C++ Standard Template Library
// Douglas C. Schmidt
// Vanderbilt University
// February 12, 2014
//
// STL Associative Container: Set
// • An std::set is an ordered collection of unique keys
//   - e.g., a set of student ID numbers

#include <iostream>
#include <iterator> // For std::ostream_iterator
#include <set>
#include <algorithm> // For std::copy
#include <cassert>  // For assert

int main() {
    std::set<int> myset;

    // Insert elements into the set
    for (int i = 1; i <= 5; i++) {
        myset.insert(i * 10); // Inserts 10, 20, 30, 40, 50
    }

    // Attempt to insert a duplicate value (20).
    // std::pair<iterator, bool> ret will indicate if insertion happened (bool is true)
    // and provide an iterator to the element.
    std::pair<std::set<int>::iterator, bool> ret = myset.insert(20);
    // Assert that the insertion did not happen because 20 already exists.
    assert(ret.second == false);

    // Insert elements from an array (5, 10, 15). Duplicates (5, 10) will be ignored.
    int myints[] = {5, 10, 15};
    myset.insert(myints, myints + 3);

    // Copy elements of the set to standard output, each on a new line.
    std::copy(myset.begin(), myset.end(),
              std::ostream_iterator<int>(std::cout, "\n"));

    return 0;
}


