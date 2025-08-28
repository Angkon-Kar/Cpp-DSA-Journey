#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // A vector of integers, initially empty.
    vector<int> numbers; 
    
    // A vector of strings, initialized with three elements.
    vector<string> fruits = {"Apple", "Banana", "Cherry"};

    cout << "Vector 'numbers' is empty. Its size is: " << numbers.size() << endl;
    cout << "Vector 'fruits' has " << fruits.size() << " elements." << endl;
    
    return 0;
}
/*
Vector 'numbers' is empty. Its size is: 0
Vector 'fruits' has 3 elements.
*/