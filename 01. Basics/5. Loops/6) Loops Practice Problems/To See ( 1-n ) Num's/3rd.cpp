/*
    Write a Program to see (1-n) Number’s using Do-While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    do
    {
        cout << i << " ";
    } while (i <= 100);

    return 0;
}

/*
    Output
    Enter a number: 10
    1 2 3 4 5 6 7 8 9 10
*/