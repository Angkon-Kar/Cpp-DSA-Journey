//  Inverted Half Pyramid Using Stars

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "No. of Row = ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output

No. of Row = 5
* * * * *
* * * *
* * *
* *
*

No. of Row = 10
* * * * * * * * * * 
* * * * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * *
* *
*

*/