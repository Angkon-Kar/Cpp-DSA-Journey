#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> fruits = {"Apple", "Banana", "Cherry"};

    // Access elements using the [] operator.
    cout << "First fruit: " << fruits[0] << endl; 
    
    // Access elements using the at() method for safety.
    cout << "Second fruit: " << fruits.at(1) << endl;
    
    // Access the first and last elements directly.
    cout << "First element using front(): " << fruits.front() << endl;
    cout << "Last element using back(): " << fruits.back() << endl;

    return 0;
}
/*
First fruit: Apple
Second fruit: Banana
First element using front(): Apple
Last element using back(): Cherry
*/