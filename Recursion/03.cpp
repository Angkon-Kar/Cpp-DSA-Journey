// Given an integer n(1 <= n <= 100000), print the digits of n in reverse order using recursion.
#include <iostream>
using namespace std;

void printReverse(int n) {
    // base case
    if (n < 10) {
        cout << n << " ";
        return;
    }
    
    // print last digit
    cout << n % 10 << " ";
    
    // recursive call with remaining digits
    printReverse(n / 10);
}

int main() {
    int n;
    cout << "Enter an integer (1 <= n <= 100000): ";
    cin >> n;
    
    if (n < 1 || n > 100000) {
        cout << "Input out of range!" << endl;
        return 1;
    }
    
    cout << "Digits in reverse order: ";
    printReverse(n);
    cout << endl;
    
    return 0;
}

/*
output Example:
Enter an integer (1 <= n <= 100000): 12345
Digits in reverse order: 5 4 3 2 1

Enter an integer (1 <= n <= 100000): 789
Digits in reverse order: 9 8 7

Enter an integer (1 <= n <= 100000): 52479
Digits in reverse order: 9 7 4 2 5 
*/