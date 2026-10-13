/*
    Write a Program to see ( 1^2 +2^2 +3^2 + .... +n^2 )Series Sum using For Loop Statement
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    // Ask the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Loop from 1 to n to calculate sum of squares
    for (int i = 1; i <= n; i++)
    {
        sum += (i * i); // Add square of current number to sum
    }

    // Display the result
    cout << "Sum of the series (1^2 + 2^2 + ... + " << n << "^2) = " << sum << endl;

    return 0;
}

/*
--------------------------------------------------------------
🧠 Summary: Sum of Squares using For Loop
--------------------------------------------------------------

🔢 Formula: 1^2 + 2^2 + 3^2 + ... + n^2
📌 We're using a loop to calculate it step by step.

✅ Example:
    Input: 5
    Output: 55
    (1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55)

💡 This is useful to understand loops and accumulation patterns.
*/