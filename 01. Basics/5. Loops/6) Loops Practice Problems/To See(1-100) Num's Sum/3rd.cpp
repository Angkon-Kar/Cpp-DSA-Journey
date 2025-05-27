/*
    Write a Program to see (1-100) Number’s Sumusing Do-While Loop Statement
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 1, s = 0;
    do
    {
        s = s + a;
        a++;
    } while (a <= 100);
    cout << s;
    return 0;
}

/*
    Output
    5050
*/