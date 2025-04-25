// formatted_output.cpp
// Demonstrates formatted output using setw, setprecision, and fixed

#include <iostream>   // For input/output
#include <iomanip>    // For formatting manipulators like setw, setprecision, fixed
using namespace std;

int main() {
    // Declare some sample float/double values
    double pi = 3.1415926535;
    double amount = 1234.56789;

    // Header
    cout << "Demonstrating formatted output in C++" << endl;
    cout << "-------------------------------------" << endl;

    // Default output
    cout << "Default output of pi: " << pi << endl;

    // Using fixed and setprecision
    cout << fixed << setprecision(2);  // Fix decimal and show 2 digits after point
    cout << "Fixed & setprecision(2) output of pi: " << pi << endl;

    // Using setw for aligning text in columns
    cout << "\nAligned Table using setw:" << endl;
    cout << setw(10) << "Item" << setw(15) << "Price" << endl;
    cout << setw(10) << "Pen" << setw(15) << 5.25 << endl;
    cout << setw(10) << "Notebook" << setw(15) << 42.75 << endl;
    cout << setw(10) << "Bag" << setw(15) << amount << endl;

    return 0;
}
