//  04_STL_Container_Overview.cpp


// The C++ Standard Template Library
// Douglas C. Schmidt
// Vanderbilt University
// February 12, 2014
//
// STL Container Overview
// • STL containers are Abstract Data Types (ADTs)
// • All containers are parameterized by the type(s) they contain
// • Each container declares various traits
//   - e.g., iterator, const_iterator, value_type, etc.
// • Each container provides factory methods for creating iterators:
//   - begin()/end() for traversing from front to back
//   - rbegin()/rend() for traversing from back to front
//
// Types of STL Containers
// • There are three types of containers
//   - Sequential containers that arrange the data they contain in a linear manner
//     * Element order has nothing to do with their value
//     * Similar to builtin arrays, but needn't be stored contiguous
//   - Associative containers that maintain data in structures suitable for fast associative operations
//     * Supports efficient operations on elements using keys ordered by operator<
//     * Implemented as balanced binary trees
//   - Adapters that provide different ways to access sequential & associative containers
//     * e.g., stack, queue, & priority_queue

// No executable code for this conceptual file.