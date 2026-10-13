//  Hollow Diamond Star Inscribed in a Rectangle Pattern

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Number = ";
    cin >> n;

    int totalrows = 2 * n + 1;

    for (int i = 1; i <= totalrows; i++)
    {
        for (int j = 1; j <= totalrows; j++)
        {
            if (i == 1 || i == totalrows || j == 1 || j == totalrows)
            {
                cout << "*";
            }

            else if (i + j == n + 2 || j - i == n || i - j == n || i + j == 3 * n + 2)
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

Number = 5
***********
*   * *   *
*  *   *  *
* *     * *
**       **
*         *
**       **
* *     * *
*  *   *  *
*   * *   *
***********

Number = 10
*********************
*        * *        *
*       *   *       *
*      *     *      *
*     *       *     *
*    *         *    *
*   *           *   *
*  *             *  *
* *               * *
**                 **
*                   *
**                 **
* *               * *
*  *             *  *
*   *           *   *
*    *         *    *
*     *       *     *
*      *     *      *
*       *   *       *
*        * *        *
*********************

*/