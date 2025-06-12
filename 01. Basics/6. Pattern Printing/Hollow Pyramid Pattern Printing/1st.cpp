#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of Rows = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1) || i == n)
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

Outputs


Number of Rows = 3
  *
 * *
*****

Number of Rows = 5
    *
   * *
  *   *
 *     *
*********

Number of Rows = 7
      *
     * *
    *   *
   *     *
  *       *
 *         *
*************

Number of Rows = 10
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*******************

*/