/*
    Sum of Squares using Formula with while Loop Structure
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int flag = 1;

    // Ask the user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    while (flag == 1)
    {
        int sum = (n * (n + 1) * (2 * n + 1)) / 6;
        cout << "Sum of the series (1^2 + 2^2 + ... + " << n << "^2) = " << sum << endl;
        flag = 0;
    }

    return 0;
}

/*
--------------------------------------------------------------
🧠 Summary: Sum of Squares using Formula with While Loop Structure
--------------------------------------------------------------
🔢 Formula: n(n+1)(2n+1)/6

✅ Example:
Input: 5
Output: Sum of the series (1^2 + 2^2 + ... + 5^2) = 55

📘 Calculation:
    5(5+1)(2×5+1)/6 = (5×6×11)/6 = 330/6 = 55
*/