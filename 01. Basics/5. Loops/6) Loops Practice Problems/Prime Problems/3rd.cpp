//  Write a Program to Check(1-n)prime number

#include <iostream>
using namespace std;

int main()
{
    int n, isprime;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        isprime = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 1;
                break;
            }
        }
        if (isprime == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
/*
    Output =
    10
    2 3 5 7
*/