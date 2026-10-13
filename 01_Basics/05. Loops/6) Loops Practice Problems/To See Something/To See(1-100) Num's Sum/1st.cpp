/*
    Write a Program to see (1-100) Number’s Sum using For Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int a, s = 0;
    for (int a = 0; a <= 100; a++)
    {
        s = s + a;
    }
    cout << s;
    return 0;
}

/*
    Output
    5050
*/