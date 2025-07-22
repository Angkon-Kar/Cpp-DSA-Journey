/*
    Sum of Cube Series (1^n + 2^n + 3^n + ... + k^n) with For Loop Structure
*/

#include <iostream>
#include <cmath> // Needed for pow() function
using namespace std;

int main()
{
    int n, k;
    long long sum = 0;

    // Take input from user
    // n = the power (e.g. 2, 3, etc.)
    // k = the upper limit of the series (i.e. how far to go)
    cout << "Enter the power (n): ";
    cin >> n;

    cout << "Enter the upper limit (k): ";
    cin >> k;

    // Calculate the sum using for loop: 1^n + 2^n + ... + k^n
    for (int i = 1; i <= k; i++)
    {
        sum += pow(i, n); // pow(base, exponent)
    }

    // Print the result
    cout << "Sum of the series (1^" << n << " + 2^" << n << " + ... + " << k << "^" << n << ") = " << sum << endl;

    return 0;
}

/*
🧠 Summary:
- You take two inputs:
  - n → the power
  - k → the upper limit
- Then you calculate: 1^n + 2^n + 3^n + ... + k^n
--------------------------------------------------------
✅ Example:
Input:
n = 3
k = 4

Output:
Sum = 1^3 + 2^3 + 3^3 + 4^3 = 100
*/