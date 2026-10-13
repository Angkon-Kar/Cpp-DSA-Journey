/*
    Write a Program to see ( 1^2 +2^2 +3^2 + .... +n^2 )Series Sum using While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;   // Counter variable
    int sum = 0; // Variable to store the sum of squares

    // Ask the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Run the loop at least once using do-while
    do
    {
        sum += (i * i); // Add square of current number to sum
        i++;            // Move to the next number
    } while (i <= n);

    // Display the result
    cout << "Sum of the series (1^2 + 2^2 + ... + " << n << "^2) = " << sum << endl;

    return 0;
}

/*
--------------------------------------------------------------
🧠 Summary: Sum of Squares using Do-While Loop
--------------------------------------------------------------

🔢 Series: 1^2 + 2^2 + 3^2 + ... + n^2
📌 We are using a do-while loop, which ensures the loop executes at least once.

✅ Example:
    Input: 5
    Output: 55
    (1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55)

💡 Useful to understand do-while loop structure in C++.
*/