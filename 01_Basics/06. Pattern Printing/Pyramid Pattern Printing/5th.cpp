//   Half Pyramid Using Numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Row Number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output

Row Number = 4
1 
2 2
3 3 3
4 4 4 4

Row Number = 8
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8

Row Number = 15
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9
10 10 10 10 10 10 10 10 10 10
11 11 11 11 11 11 11 11 11 11 11 
12 12 12 12 12 12 12 12 12 12 12 12        
13 13 13 13 13 13 13 13 13 13 13 13 13     
14 14 14 14 14 14 14 14 14 14 14 14 14 14  
15 15 15 15 15 15 15 15 15 15 15 15 15 15 15
*/