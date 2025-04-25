/*
    sizeof_operator.cpp – Checking memory size of types
*/

#include <iostream>
using namespace std;

int main() {
    // Using sizeof operator to check memory size (in bytes)
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;

    return 0;
}

/*
-----------------------------
🧠 Summary: sizeof Operator
-----------------------------

📌 The sizeof operator returns the memory size (in bytes) of a data type or variable.

✅ Example:
    sizeof(int) → usually 4 bytes
    sizeof(char) → 1 byte
    sizeof(double) → 8 bytes (on most systems)

📌 The size may vary slightly depending on system architecture (32-bit vs 64-bit).
*/
