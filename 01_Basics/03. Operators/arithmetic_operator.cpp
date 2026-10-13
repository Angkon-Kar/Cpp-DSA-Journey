//    arithmetic_operators.cpp – +, -, *, /, %

#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int b = 7;

    // Arithmetic operations
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (a - b): " << a - b << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
    cout << "Division (a / b): " << a / b << endl;      // Integer division
    cout << "Modulus (a % b): " << a % b << endl;       // Remainder

    return 0;
}

/*
------------------------------------------
🧠 Summary: Arithmetic Operators in C++
------------------------------------------

+  → Addition
-  → Subtraction
*  → Multiplication
/  → Division (integer division for int types)
%  → Modulus (gives remainder, only for integers)

📝 Example:
    int a = 20, b = 7;
    a + b → 27
    a - b → 13
    a * b → 140
    a / b → 2      (integer division: 20 / 7 = 2)
    a % b → 6      (remainder: 20 % 7 = 6)

📌 Use float/double for decimal division.
*/
