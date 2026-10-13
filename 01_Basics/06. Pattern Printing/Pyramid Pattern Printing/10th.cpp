//   Inverted Half Pyramid Pattern For Numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of Rows = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output

Number of Rows = 5
1 1 1 1 1 
2 2 2 2
3 3 3
4 4
5

Number of Rows = 9
1 1 1 1 1 1 1 1 1 
2 2 2 2 2 2 2 2
3 3 3 3 3 3 3
4 4 4 4 4 4
5 5 5 5 5
6 6 6 6
7 7 7
8 8
9

*/