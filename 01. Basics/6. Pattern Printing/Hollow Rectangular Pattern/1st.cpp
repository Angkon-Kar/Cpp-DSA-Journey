#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Rows = ";
    cin >> row;

    cout << "Columns = ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
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

    Rows = 7
    Columns = 7
    *******
    *     *
    *     *
    *     *
    *     *
    *     *
    *******

    Rows = 5
    Columns = 4
    ****
    *  *
    *  *
    *  *
    ****

    Rows = 4
    Columns = 8
    ********
    *      *
    *      *
    ********

    Rows = 3
    Columns = 5
    *****
    *   *
    *****

    Rows = 4
    Columns = 10
    **********
    *        *
    *        *
    **********
*/