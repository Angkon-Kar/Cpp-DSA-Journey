/*
    Write a Program to see (1-n) Odd Number’s Sum using While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 1;
    cout << "Enter a Positive Integer: ";
    cin >> n;
    do
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    } while (i <= n);

    cout << "Sum of Odd Number's From 1 to " << n << " is: " << sum << endl;
    return 0;
}

/*
    Output
    Enter a positive integer: 10
    Sum of odd numbers from 1 to 10 is: 25
    
    Enter a positive integer: 5 
    Sum of odd numbers from 1 to 5 is: 9
*/