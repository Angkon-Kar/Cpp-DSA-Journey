#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Iterate using a range-based for loop.
    cout << "Elements (range-based loop): ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Iterate using a traditional for loop with an index.
    cout << "Elements (indexed loop): ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Elements (range-based loop): 10 20 30 40 50 
Elements (indexed loop): 10 20 30 40 50
*/