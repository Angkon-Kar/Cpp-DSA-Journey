//  Hollow Half Pyramid Using Stars

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of Row = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
Output

Number of Row = 4
*
**
* *
****

Number of Row = 8
*
**
* *
*  *
*   *
*    *
*     *
********

Number of Row = 20
*
**
* *
*  *
*   *
*    *
*     *
*      *
*       *
*        *
*         *
*          *
*           *
*            *
*             *
*              *
*               *
*                *
*                 *
********************

*/