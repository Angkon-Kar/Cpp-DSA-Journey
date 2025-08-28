#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};
    
    cout << "Before clearing, size is: " << numbers.size() << endl;

    // Remove all elements from the vector.
    numbers.clear();
    
    cout << "After clearing, size is: " << numbers.size() << endl;
    cout << "Is the vector empty? " << (numbers.empty() ? "Yes" : "No") << endl;
    
    return 0;
}
/*
Before clearing, size is: 3
After clearing, size is: 0
Is the vector empty? Yes
*/