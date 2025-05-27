/*
    Write a Program to see (1-n) Even Number’s Sum using While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 1;
    cout << "Enter a Positive Integer: ";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    cout << "Sum of Even Number's From 1 to " << n << " is: " << sum << endl;
    return 0;
}

/*
    Output
    Enter a positive integer: 10
    Sum of Even numbers from 1 to 10 is: 30

    Enter a positive integer: 6
    Sum of Even numbers from 1 to 6 is: 12
*/