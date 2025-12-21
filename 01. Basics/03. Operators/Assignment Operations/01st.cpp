#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << "Initial value of a: " << a << endl;

    a += 5;   // a = a + 5
    cout << "After a += 5  → a = " << a << endl;

    a -= 3;   // a = a - 3
    cout << "After a -= 3  → a = " << a << endl;

    a *= 2;   // a = a * 2
    cout << "After a *= 2  → a = " << a << endl;

    a /= 4;   // a = a / 4
    cout << "After a /= 4  → a = " << a << endl;

    a %= 3;   // a = a % 3
    cout << "After a %= 3  → a = " << a << endl;

    return 0;
}

/*
-----------------------------------------------
🧠 Summary: Assignment Operators in C++
-----------------------------------------------

=    → Simple assignment
+=   → Add and assign (a += 5 is same as a = a + 5)
-=   → Subtract and assign
*=   → Multiply and assign
/=   → Divide and assign
%=   → Modulus and assign

📌 Example Flow:
    a = 10;
    a += 5;   // a = 15
    a -= 3;   // a = 12
    a *= 2;   // a = 24
    a /= 4;   // a = 6
    a %= 3;   // a = 0
*/
