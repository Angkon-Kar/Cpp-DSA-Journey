//  Simple Pyramid Using Number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output

Enter Number = 5
    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

Enter Number = 7
      1 
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
 1 2 3 4 5 6
1 2 3 4 5 6 7

Enter Number = 9
        1 
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
   1 2 3 4 5 6
  1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9

*/