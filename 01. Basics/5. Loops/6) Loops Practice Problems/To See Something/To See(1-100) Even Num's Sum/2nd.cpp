/*
    Write a Program to see (1-100) Odd Number’s Sumusing While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 1, s = 0;
    while (a <= 100)
    {
        s = s + a;
        a = a + 2;
    }
    cout << s;
    return 0;
}

/*
    Output
    2500
*/