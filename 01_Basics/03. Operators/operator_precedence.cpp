//  operator_precedence.cpp – Importance of Operator Order

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;

    int result1 = a + b * c;          // Multiplication happens before addition
    int result2 = (a + b) * c;        // Parentheses change the order

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "Result of a + b * c       : " << result1 << endl;
    cout << "Result of (a + b) * c     : " << result2 << endl;

    int result3 = a + b - c * 2 / 2;   // Mixed operations

    cout << "Result of a + b - c * 2 / 2 : " << result3 << endl;

    return 0;
}

/*
------------------------------------------------------------
🧠 Summary: Operator Precedence and Associativity in C++
------------------------------------------------------------

📌 Operator precedence determines the order in which operators are evaluated.
   🔹 Multiplication (*) and division (/) have higher precedence than addition (+) and subtraction (-).
   🔹 Parentheses `()` can be used to override the default precedence.

✅ Example:
    a + b * c       → b * c happens first, then a is added.
    (a + b) * c     → a + b happens first due to parentheses.

👁️‍🗨️ Mixed Example:
    a + b - c * 2 / 2
    = a + b - ( (c * 2) / 2 )  → c*2 = 4, 4/2 = 2, then a + b - 2

⚠️ Tip:
    Always use parentheses for clarity when mixing operators.
*/
