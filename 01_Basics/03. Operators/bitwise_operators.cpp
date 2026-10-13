#include <iostream>
using namespace std;

int main() {
    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    cout << "a = " << a << ", b = " << b << endl;

    cout << "a & b  (AND)      : " << (a & b) << endl;   // 0101 & 0011 = 0001 → 1
    cout << "a | b  (OR)       : " << (a | b) << endl;   // 0101 | 0011 = 0111 → 7
    cout << "a ^ b  (XOR)      : " << (a ^ b) << endl;   // 0101 ^ 0011 = 0110 → 6
    cout << "~a    (NOT)       : " << (~a) << endl;      // ~0101 = 1010 (in 2's complement = -6)
    cout << "a << 1 (Left Shift): " << (a << 1) << endl; // 0101 → 1010 = 10
    cout << "a >> 1 (Right Shift): " << (a >> 1) << endl;// 0101 → 0010 = 2

    return 0;
}

/*
-----------------------------------------------
🧠 Summary: Bitwise Operators in C++
-----------------------------------------------

&   → Bitwise AND      (1 only if both bits are 1)
|   → Bitwise OR       (1 if at least one bit is 1)
^   → Bitwise XOR      (1 if bits are different)
~   → Bitwise NOT      (flips all bits, returns negative in 2's complement)
<<  → Left shift       (shifts bits to the left, adds 0s on right)
>>  → Right shift      (shifts bits to the right)

✅ Example with a = 5 (0101), b = 3 (0011):
    a & b  → 0001 = 1
    a | b  → 0111 = 7
    a ^ b  → 0110 = 6
    ~a     → -6 (on most systems with 2's complement)
    a << 1 → 1010 = 10
    a >> 1 → 0010 = 2
*/
