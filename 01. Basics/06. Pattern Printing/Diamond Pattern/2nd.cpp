//  Diamond Pattern Using Alphabet

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "No. of rows for the Upper Part of the Diamond = ";
    //  No. of rows for the Upper Part of the Diamond
    cin >> n;

    int alpha = 65; //  ASCII Value of 'A'

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << char(alpha + j);
        }
        for (int j = i - 2; j >= 0; j--)
        {
            cout << char(alpha + j);
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << char(alpha + j);
        }
        for (int j = i - 2; j >= 0; j--)
        {
            cout << char(alpha + j);
        }

        cout << endl;
    }
    return 0;
}

/*
Output

No. of rows for the Upper Part of the Diamond = 5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
 ABCDCBA
  ABCBA
   ABA
    A


No. of rows for the Upper Part of the Diamond = 10
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
    ABCDEFEDCBA
   ABCDEFGFEDCBA
  ABCDEFGHGFEDCBA
 ABCDEFGHIHGFEDCBA
ABCDEFGHIJIHGFEDCBA
 ABCDEFGHIHGFEDCBA
  ABCDEFGHGFEDCBA
   ABCDEFGFEDCBA
    ABCDEFEDCBA
     ABCDEDCBA
      ABCDCBA
       ABCBA
        ABA
         A

*/