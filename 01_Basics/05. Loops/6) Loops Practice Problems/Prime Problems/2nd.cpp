//  Write a Program to check Prime Number
#include <iostream>
using namespace std;

int main()
{
    int n, i, s;
    cout << "Enter a number = ";
    cin >> n;

    for (int i = 2; i <= n - 1; i++)
    {
        s = n % i;
        if (s == 0)
        {
            cout << n << " : This Number is not a Prime Number!!" << endl;
            break;
        }
        if (s != 0)
        {
            cout << n << " : This Number is a Prime Number!!" << endl;
            break;
        }
    }
    return 0;
}
/*
    Output =
    Enter a number = 13
    13 : This Number is a Prime Number!!
*/