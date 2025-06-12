//  Half Pyramid using 0-1 Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "No. of Row = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << " 1";
            }
            else
            {
                cout << " 0";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
Output

No. of Row = 4
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1

No. of Row = 5
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1

No. of Row = 6
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 0 1 0 1 0 1

No. of Row = 9
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 0 1 0 1 0 1
 1 0 1 0 1 0 1
 0 1 0 1 0 1 0 1
 1 0 1 0 1 0 1 0 1

No. of Row = 10
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 0 1 0 1 0 1
 1 0 1 0 1 0 1
 0 1 0 1 0 1 0 1
 1 0 1 0 1 0 1 0 1
 0 1 0 1 0 1 0 1 0 1
*/