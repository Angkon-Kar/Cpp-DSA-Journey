#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input elements
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Output matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Sample Input:
Enter number of rows: 2
Enter number of columns: 3
Enter elements of the matrix:
1 2 3
4 5 6

Output:
The matrix is:
1 2 3
4 5 6
*/
