/*
    Write a Program to see (1-15) Even Number’s using Do-While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    do
    {
        cout << a << endl;
        a = a + 2;
    } while (a <= 15);

    return 0;
}

/*
    Output
    2
    4
    6
    8
    10
    12
    14
*/