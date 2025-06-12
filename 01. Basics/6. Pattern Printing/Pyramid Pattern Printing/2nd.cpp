//  Simple Pyramid Using Star

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
Output

Enter Number = 3
  * 
 * *
* * *

Enter Number = 5
    * 
   * *
  * * *
 * * * *
* * * * *

Enter Number = 8
       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *
*/