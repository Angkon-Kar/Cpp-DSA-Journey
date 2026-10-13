/*
Reverse/Inverted Floyd's Triangle
Print the triangle in reverse, starting from the last row
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "NO. of Row = ";
    cin >> n;

    int total = n * (n + 1) / 2;
    int start = total;

    for (int i = n; i >= 1; i--)
    {
        int line_start = start - i + 1;
        for (int j = 0; j < i; j++)
        {
            cout << line_start++ << " ";
        }
        cout << endl;
        start -= i;
    }

    return 0;
}

/*
Output

NO. of Row = 5
11 12 13 14 15 
7 8 9 10
4 5 6
2 3
1

NO. of Row = 10
46 47 48 49 50 51 52 53 54 55 
37 38 39 40 41 42 43 44 45
29 30 31 32 33 34 35 36
22 23 24 25 26 27 28
16 17 18 19 20 21
11 12 13 14 15
7 8 9 10
4 5 6
2 3
1

*/