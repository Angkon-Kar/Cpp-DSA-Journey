#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};

    // Get the number of elements.
    cout << "Number of elements: " << numbers.size() << endl;
    
    // Get the total space allocated.
    cout << "Current capacity: " << numbers.capacity() << endl;
    
    numbers.push_back(40);
    cout << "\nAfter adding an element..." << endl;
    cout << "New size: " << numbers.size() << endl;
    cout << "New capacity: " << numbers.capacity() << endl;
    
    return 0;
}
/*
Number of elements: 3
Current capacity: 3

After adding an element...
New size: 4
New capacity: 6
*/