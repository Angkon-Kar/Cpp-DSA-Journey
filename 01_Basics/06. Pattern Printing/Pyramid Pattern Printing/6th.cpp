//   Inverted Half Pyramid Using Numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Row Number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output

Row Number = 6
1 2 3 4 5 6 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Row Number = 10
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/