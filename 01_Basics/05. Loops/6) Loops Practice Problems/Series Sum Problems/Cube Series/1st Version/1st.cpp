/*
    Sum of Cube Series (1³ + 2³ + ... + n³) with For Loop Structure
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

    // Calculate sum using for loop
    for (int i = 1; i <= n; i++)
    {
        sum += i * i * i;
    }

    // Display the result
    cout << "Sum of the series (1^3 + 2^3 + ... + " << n << "^3) = " << sum << endl;

    return 0;
}

/*
--------------------------------------------------------------
🧠 Summary: Sum of Cubes using For Loop
--------------------------------------------------------------
✅ Example:
Input: 4
Output: Sum of the series (1^3 + 2^3 + ... + 4^3) = 100

📘 Calculation:
1^3 + 2^3 + 3^3 + 4^3 = 1 + 8 + 27 + 64 = 100
*/