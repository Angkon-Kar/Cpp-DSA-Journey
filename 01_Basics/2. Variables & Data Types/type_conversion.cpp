/*
    Implicit and Explicit Type Casting
*/

#include <iostream>
using namespace std;

int main() {
    // Implicit Type Conversion (done automatically)
    int a = 5;
    double b = a; // int to double (no data loss)

    cout << "Implicit Type Conversion:" << endl;
    cout << "int a = " << a << endl;
    cout << "double b = a → " << b << endl;

    // Another implicit example (double to int)
    double x = 9.99;
    int y = x; // fractional part will be lost

    cout << "\nAnother Implicit Conversion (double to int):" << endl;
    cout << "double x = " << x << endl;
    cout << "int y = x → " << y << " (fraction lost)" << endl;

    // Explicit Type Conversion (done manually)
    double pi = 3.1416;
    int intPi = (int)pi; // converting double to int

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "double pi = " << pi << endl;
    cout << "int intPi = (int)pi → " << intPi << endl;

    return 0;
}
