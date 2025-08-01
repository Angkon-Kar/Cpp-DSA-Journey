//  Floyd's Triangle

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "NO. of Row = ";
    cin >> n;

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

/*
Output

NO. of Row = 5
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15

NO. of Row = 8
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36

*/