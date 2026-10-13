//   Numerical Hollow Rectangular Pattern

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Rows = ";
    cin >> rows;

    cout << "Columns = ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << j << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
/*
    Output
    
    Rows = 5
    Columns = 5
    1 2 3 4 5 
    1       5 
    1       5 
    1       5
    1 2 3 4 5

    Rows = 4
    Columns = 9
    1 2 3 4 5 6 7 8 9 
    1               9
    1               9
    1 2 3 4 5 6 7 8 9
*/