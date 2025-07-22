/*
    Loop inside another loop (Nested Loops)
    It is also possible to place a loop inside another loop. This is called a
    Nested Loop.
    The “inner loop” will be executed one time for each iteration of the
    “outer loop”
*/

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/*
--------------------------------------------------------------
🧠 Summary: Nested Loops in C++
--------------------------------------------------------------

📌 A loop inside another loop is called a nested loop.
    ➤ Outer loop controls rows.
    ➤ Inner loop controls columns or elements within the row.

✅ Example Pattern for rows = 4:
    *
    * *
    * * *
    * * * *

💡 Nested loops are commonly used for patterns, matrices, and 2D problems.
*/
