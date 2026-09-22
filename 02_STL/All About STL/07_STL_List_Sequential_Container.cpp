// 07_STL_List_Sequential_Container.cpp
//
// The C++ Standard Template Library
// Douglas C. Schmidt
// Vanderbilt University
// February 12, 2014
//
// STL List Sequential Container
// • A std::list has constant time insertion & deletion at any point in the sequence (not just at the beginning & end)
//   - performance trade-off: does not offer a random access iterator
// • Implemented as doubly-linked list

#include <list>
#include <iostream>
#include <iterator> // For std::ostream_iterator
#include <string>
#include <algorithm> // For std::copy and std::reverse_copy

int main() {
    std::list<std::string> a_list;

    // Add elements to the back
    a_list.push_back("banana");

    // Add elements to the front
    a_list.push_front("apple");

    // Add elements to the back again
    a_list.push_back("carrot");

    // Create an ostream_iterator to print elements followed by a newline
    std::ostream_iterator<std::string> out_it(std::cout, "\n");

    // Copy elements from the beginning to the end (forward)
    std::cout << "Original list (forward):" << std::endl;
    std::copy(a_list.begin(), a_list.end(), out_it);
    std::cout << std::endl; // Add a newline for separation

    // Copy elements in reverse order using std::reverse_copy
    std::cout << "List (reverse_copy):" << std::endl;
    std::reverse_copy(a_list.begin(), a_list.end(), out_it);
    std::cout << std::endl; // Add a newline for separation

    // Copy elements using reverse iterators (from rbegin to rend)
    std::cout << "List (reverse iterators):" << std::endl;
    std::copy(a_list.rbegin(), a_list.rend(), out_it);
    std::cout << std::endl; // Add a newline for separation

    return 0;
}