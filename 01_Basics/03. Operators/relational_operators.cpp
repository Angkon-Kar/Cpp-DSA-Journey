//  relational_operators.cpp – ==, !=, <, >, <=, >=

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Relational operations
    cout << "a = " << a << ", b = " << b << endl;

    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a >= b : " << (a >= b) << endl;

    return 0;
}

/*
---------------------------------------------
🧠 Summary: Relational Operators in C++
---------------------------------------------

==  → Equal to
!=  → Not equal to
<   → Less than
>   → Greater than
<=  → Less than or equal to
>=  → Greater than or equal to

📝 These operators return:
    🔹 true (1) if the condition is correct
    🔹 false (0) if the condition is wrong

✅ Example:
    int a = 10, b = 20;
    a == b  → false (0)
    a != b  → true  (1)
    a < b   → true  (1)

📌 Often used in conditions (if, while, for loops)
*/
