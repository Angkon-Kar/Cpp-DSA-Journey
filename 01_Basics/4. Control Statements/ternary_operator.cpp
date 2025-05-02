//  ternary_operator.cpp – Short if-else using ? :

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Ternary operator: condition ? true_value : false_value
    string result = (number % 2 == 0) ? "Even" : "Odd";

    cout << "The number is " << result << "." << endl;

    return 0;
}

/*
--------------------------------------------------------------
🧠 Summary: Ternary Operator (? :) in C++
--------------------------------------------------------------

📌 Syntax: condition ? value_if_true : value_if_false;

✅ Example:
    (number % 2 == 0) ? "Even" : "Odd";

🔹 It's a shorthand for simple if-else:
    if (number % 2 == 0)
        result = "Even";
    else
        result = "Odd";

💡 Use ternary operator for concise conditional expressions.
*/
