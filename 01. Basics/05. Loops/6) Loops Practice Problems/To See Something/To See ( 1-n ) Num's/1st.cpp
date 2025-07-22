/*
    Write a Program to see (1-n) Number’s using For Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}

/*
    Output
    Enter a number: 10
    1 2 3 4 5 6 7 8 9 10
*/