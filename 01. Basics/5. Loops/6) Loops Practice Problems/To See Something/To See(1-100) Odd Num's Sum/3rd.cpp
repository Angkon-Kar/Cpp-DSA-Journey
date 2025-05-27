/*
    Write a Program to see (1-100) Even Number’s Sumusing Do-While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 2, s = 0;
    do
    {
        s = s + a;
        a = a + 2;
    } while (a <= 100);
    cout << s;
    return 0;
}

/*
    Output
    2550
*/