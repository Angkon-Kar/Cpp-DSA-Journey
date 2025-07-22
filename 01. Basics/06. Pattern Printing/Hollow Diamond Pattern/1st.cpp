//  Hollow Diamond using Star Pattern

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Number = ";
    cin >> n;

    int space = (2 * n - 1) / 2;

    //  Upper Half of the diamond
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        space--;
    }
    space = 1;

    //  Lower Half of the diamond
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        space++;
    }

    return 0;
}

/*
Output

Number = 4
   *
  * *
 *   *
*     *
 *   *
  * *
   *

Number = 10
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*                 *
 *               *
  *             *
   *           *
    *         *
     *       *
      *     *
       *   *
        * *
         *

*/