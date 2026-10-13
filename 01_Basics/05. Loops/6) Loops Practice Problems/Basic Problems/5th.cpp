/*
    Find The Sum Of Digits In A Given Number N

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += lastdigit;
        n /= 10;
    }
    cout << sum << endl;
}

/*
    Output
    12340
    10
*/