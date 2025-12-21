// Fibonacci series using recursion
#include <iostream>
using namespace std;

int fib(int n){
    // base case
    if(n==0) return 0;
    if(n==1) return 1;

    // recursive case
    int result = fib(n-1) + fib(n-2);
    return result;
}

int main() {
    
    cout << "Fibonacci of 6 is: " << fib(6) << endl; //Fibonacci of 6 is: 8
    cout << "Fibonacci of 10 is: " << fib(10) << endl; //Fibonacci of 10 is: 55
    
    cout << fib(0) << " " << fib(1) << " " << fib(2) << " " << fib(3) << " " << fib(4) << " " << fib(5) << " " << fib(6) << " " << fib(7) << " " << fib(8) << " " << fib(9) << " " << fib(10) << endl;
    // Output: 0 1 1 2 3 5 8 13 21 34 55
    
    return 0;
}