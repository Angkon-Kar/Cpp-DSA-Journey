#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    
    // Add elements to the end of the vector.
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Elements of vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}