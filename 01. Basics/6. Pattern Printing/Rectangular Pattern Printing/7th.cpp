/*
    Custom Rectangular Pattern & Symbol
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row, col;
    cout << "Height = ";
    cin >> row;
    cout << "Width = ";
    cin >> col;
    char symbol;
    cout << "Symbol = ";
    cin >> symbol;

    for (int h = 0; h < row; h++)
    {
        for (int w = 0; w < col; w++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    return 0;
}

/*
    Outputs

    Height = 5
    Width = 5
    Symbol = +
    + + + + +
    + + + + +
    + + + + +
    + + + + +
    + + + + +

    Height = 2
    Width = 3
    Symbol = a
    a a a
    a a a

    Height = 4
    Width = 5
    Symbol = u
    u u u u u
    u u u u u
    u u u u u
    u u u u u

    Height = 7
    Width = 11
    Symbol = =
    = = = = = = = = = = =
    = = = = = = = = = = =
    = = = = = = = = = = =
    = = = = = = = = = = =
    = = = = = = = = = = =
    = = = = = = = = = = =
    = = = = = = = = = = =

    Height = 2
    Width = 6
    Symbol = :
    : : : : : :
    : : : : : :

    Height = 3
    Width = 7
    Symbol = ' 
    ' ' ' ' ' ' '
    ' ' ' ' ' ' '
    ' ' ' ' ' ' '

    Height = 3
    Width = 9
    Symbol = $
    $ $ $ $ $ $ $ $ $
    $ $ $ $ $ $ $ $ $
    $ $ $ $ $ $ $ $ $
*/