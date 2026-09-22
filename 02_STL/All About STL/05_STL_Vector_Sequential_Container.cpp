// 05_STL_Vector_Sequential_Container.cpp

// The C++ Standard Template Library
// Douglas C. Schmidt
// Vanderbilt University
// February 12, 2014
//
// STL Vector Sequential Container
// • A std::vector is a dynamic array that can grow & shrink at the end
//   - e.g., it provides (pre-re)allocation, indexed storage, push_back(), pop_back()
// • Supports random access iterators
// • Similar to - but more powerful than - built-in C/C++ arrays

#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[]) {
    // Names of the projects
    std::vector<std::string> projects; 

    // Print program name
    std::cout << "program name: " << argv[0] << std::endl;

    // Add command-line arguments to the vector
    for (int i = 1; i < argc; ++i) {
        projects.push_back(argv[i]);
    }

    // Print elements of the vector (assuming at least one argument for argv[1])
    if (argc > 1) {
        std::cout << "First project: " << projects[0] << std::endl;
    }
    
    // Example of iterating and printing all elements (not in original slide, but good practice)
    std::cout << "All projects: " << std::endl;
    for (const std::string& p : projects) {
        std::cout << p << std::endl;
    }

    return 0;
}
