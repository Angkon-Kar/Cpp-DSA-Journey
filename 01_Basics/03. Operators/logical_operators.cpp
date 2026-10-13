//  logical_operators.cpp – &&, ||, !

#include <iostream>
using namespace std;

int main() {
    bool A = true;
    bool B = false;

    // Logical operations
    cout << "A = " << A << ", B = " << B << endl;

    cout << "A && B : " << (A && B) << endl;  // AND: true only if both are true
    cout << "A || B : " << (A || B) << endl;  // OR: true if at least one is true
    cout << "!A     : " << (!A) << endl;      // NOT: true becomes false
    cout << "!B     : " << (!B) << endl;

    return 0;
}

/*
------------------------------------------
🧠 Summary: Logical Operators in C++
------------------------------------------

&&  → Logical AND
     🔹 true if both conditions are true
     🔸 false otherwise

||  → Logical OR
     🔹 true if at least one condition is true

!   → Logical NOT
     🔹 Reverses the value: true becomes false, false becomes true

✅ Example:
    A = true, B = false
    A && B → false
    A || B → true
    !A     → false
    !B     → true

📌 Commonly used in conditions:
    if (a > 0 && b > 0)
    while (!found)
*/
