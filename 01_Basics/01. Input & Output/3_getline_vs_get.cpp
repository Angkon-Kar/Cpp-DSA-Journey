// getline_vs_get.cpp
// Demonstrates the difference between cin.getline() and cin.get()

#include <iostream>
using namespace std;

int main() {
    char line1[100];
    char line2[100];

    cout << "Enter a line (using cin.getline()): ";
    cin.getline(line1, 100); // Reads the entire line including spaces until newline
    cout << "You entered (getline): " << line1 << endl;

    cout << "\nEnter another line (using cin.get()): ";
    cin.get(line2, 100); // Reads input until newline, BUT leaves the newline character in the input buffer
    cout << "You entered (get): " << line2 << endl;

    // Demonstrating leftover newline in buffer
    char ch;
    cout << "\nNow let's read one more character using cin.get(): ";
    cin.get(ch); // This will read the leftover '\n' from previous input
    cout << "Character read: [" << ch << "] (Likely a leftover newline)" << endl;

    return 0;
}
