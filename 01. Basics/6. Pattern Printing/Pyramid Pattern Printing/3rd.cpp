//   Half Pyramid Using Stars

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*

Output

Enter Number = 4
*
**
***
****

Enter Number = 7
*
**
***
****
*****
******
*******

Enter Number = 10
*
**
***
****
*****
******
*******
********
*********
**********

*/