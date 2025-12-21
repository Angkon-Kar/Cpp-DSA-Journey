// Factorial of a number using recursion
#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int n){
    // base case
    if(n==0) return 1;

    // recursive case
    int result = n * fact(n-1);
    return result;
}

int main() {
    
    cout << "Factorial of 5 is: " << fact(5) << endl;
    
    // Output: 120
    return 0;
}