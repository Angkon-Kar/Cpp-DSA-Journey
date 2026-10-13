/*
    Sum of Cube Series (1^n + 2^n + 3^n + ... + k^n) with While Loop Structure
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k;
    long long sum = 0;
    int i = 1;

    cout << "Enter the power (n): ";
    cin >> n;

    cout << "Enter the upper limit (k): ";
    cin >> k;

    // While loop version
    while (i <= k)
    {
        sum += pow(i, n);
        i++;
    }

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
n = 2
k = 3

Output:
Sum = 1^2 + 2^2 + 3^2 = 14
*/