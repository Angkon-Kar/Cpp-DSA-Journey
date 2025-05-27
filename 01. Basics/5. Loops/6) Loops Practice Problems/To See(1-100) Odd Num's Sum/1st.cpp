/*
    Write a Program to see (1-100) Even Number’s Sum using For Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 2, s = 0;
    for (int a = 2; a <= 100; a = a + 2)
    {
        s = s + a;
    }
    cout << s;
    return 0;
}

/*
    Output
    2550
*/