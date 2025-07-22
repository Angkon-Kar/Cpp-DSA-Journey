/*
     Program to find sum of natural numbers till n.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = i + sum;
    }
    cout << sum << endl;
    return 0;
}

/*
    Output
    5
    15
*/