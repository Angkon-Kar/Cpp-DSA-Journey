#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    
    // Remove the last element.
    numbers.pop_back();

    // Remove the first element using an iterator.
    numbers.erase(numbers.begin());
    
    cout << "Elements after removal: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
/*
Elements after removal: 20 30 40 
*/