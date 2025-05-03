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
    // Outer loop
    for (int i = 1; i <= 3; ++i)
    {
        cout << "Outer: " << i << "\n";
        // Executes 3 times
        // Inner loop
        for (int j = 1; j <= 4; ++j)
        {
            cout << "Inner: " << j << "\n";
            // Executes 6 times (3 * 4)
        }
    }
    return 0;
}
/*
Output =
    Outer: 1
        Inner: 1
        Inner: 2
        Inner: 3
        Inner: 4
    Outer: 2
        Inner: 1
        Inner: 2
        Inner: 3
        Inner: 4
    Outer: 3
        Inner: 1
        Inner: 2
        Inner: 3
        Inner: 4
*/