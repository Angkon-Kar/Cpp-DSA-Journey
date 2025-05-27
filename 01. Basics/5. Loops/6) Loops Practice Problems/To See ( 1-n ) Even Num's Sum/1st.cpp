/*
    Write a Program to see (1-n) Even Number’s Sum using For Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a Positive Integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of Even Number's From 1 to " << n << " is: " << sum << endl;
    return 0;
}