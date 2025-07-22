//   Half Pyramid 180 Deg. Rotation Using Stars

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
Output

if = for (int i = 0; i <= n; i++)
Enter Number = 4
   *
  **
 ***
****

Enter Number = 4
    *
   **
  ***
 ****
 
Enter Number = 7
       *
      **
     ***
    ****
   *****
  ******
 *******

Enter Number = 10
          *
         **
        ***
       ****
      *****
     ******
    *******
   ********
  *********
 **********
 */