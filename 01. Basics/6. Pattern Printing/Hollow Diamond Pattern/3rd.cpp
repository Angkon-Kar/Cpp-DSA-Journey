//  Hollow Square With Diagonals Pattern

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == (n - i + 1))
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

Number = 10
**********
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
**********

Number = 15
***************
**           **
* *         * *
*  *       *  *
*   *     *   *
*    *   *    *
*     * *     *
*      *      *
*     * *     *
*    *   *    *
*   *     *   *
*  *       *  *
* *         * *
**           **
***************

Number = 20
********************
**                **
* *              * *
*  *            *  *
*   *          *   *
*    *        *    *
*     *      *     *
*      *    *      *
*       *  *       *
*        **        *
*        **        *
*       *  *       *
*      *    *      *
*     *      *     *
*    *        *    *
*   *          *   *
*  *            *  *
* *              * *
**                **
********************

*/