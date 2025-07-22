//  Numerical Rectangular Pattern

#include <iostream>
using namespace std;

int main()
{
    int rows = 5;    // Number of Rows
    int columns = 5; // Number of columns
    int num = 1;     // Starting number

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << num << "\t";
            num++;
        }
        cout << endl;
    }
    return 0;
}

/*
    Output
    1       2       3       4       5
    6       7       8       9       10
    11      12      13      14      15
    16      17      18      19      20
    21      22      23      24      25
*/