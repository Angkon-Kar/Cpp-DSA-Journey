// inline_functions.cpp
// Topic: Using Inline Functions to Speed Up Small Functions

#include <iostream>
using namespace std;

// Inline function to calculate the square of a number
inline int square(int n)
{
    return n * n;
}

// Inline function to get maximum of two integers
inline int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num = 7;
    cout << "Square of " << num << " is: " << square(num) << endl;

    int x = 10, y = 20;
    cout << "Maximum of " << x << " and " << y << " is: " << max(x, y) << endl;

    return 0;
}

/*
    Output
    Square of 7 is: 49
    Maximum of 10 and 20 is: 20
*/
