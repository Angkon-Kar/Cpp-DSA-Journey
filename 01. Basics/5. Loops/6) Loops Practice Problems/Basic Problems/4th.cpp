/*
     Count The Number Of Digits For A Given Number N
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int digits = 0;
    while (n > 0)
    {
        digits++;
        n = n / 10;
    }
    cout << digits << endl;
    return 0;
}

/*
    Output
    458
    3

    45458258
    8
*/