// 10_STL_Associative_Container_Map.cpp
//
// The C++ Standard Template Library
// Douglas C. Schmidt
// Vanderbilt University
// February 12, 2014
//
// STL Associative Container: Map
// • An std::map associates a value with each unique key
//   - e.g., a student’s ID number
// • Its value type is implemented as pair<const Key, Data>

#include <iostream>
#include <map>
#include <string>
#include <algorithm> // For std::for_each

// Define My_Map as a typedef for std::map<std::string, int>
typedef std::map<std::string, int> My_Map;

// Define a function object (functor) to print map elements
struct print {
    void operator()(const My_Map::value_type &p) {
        // value_type for map is std::pair<const Key, Value>
        std::cout << p.second << " " << p.first << std::endl;
    }
};

int main() {
    My_Map my_map;

    std::cout << "Enter words (Ctrl+D or Ctrl+Z to stop):" << std::endl;
    // Read words from standard input and count their occurrences
    for (std::string a_word; std::cin >> a_word;) {
        my_map[a_word]++; // If a_word is new, it's inserted with value 0 then incremented to 1
                         // If a_word exists, its value is incremented
    }

    std::cout << "\nWord counts:" << std::endl;
    // Iterate over the map and print each key-value pair using std::for_each and the print functor
    std::for_each(my_map.begin(), my_map.end(), print());

    return 0;
}


