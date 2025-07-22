/*
    Sum of Cube Series using Formula with For Loop Structure
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Ask user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Using formula for sum of cubes inside a for loop structure
    for (int i = 1; i <= 1; i++)
    {
        int sum = (n * (n + 1) / 2);
        sum = sum * sum; // (n(n+1)/2)^2
        cout << "Sum of the series (1^3 + 2^3 + ... + " << n << "^3) = " << sum << endl;
    }

    return 0;
}

/*
--------------------------------------------------------------
🧠 Summary: Sum of Cubes using Formula with For Loop Structure
--------------------------------------------------------------
🔢 Formula: (n(n+1)/2)^2

✅ Example:
Input: 5
Output: Sum of the series (1^3 + 2^3 + ... + 5^3) = 225

📘 Calculation:
    (5×6/2)^2 = (15)^2 = 225
*/