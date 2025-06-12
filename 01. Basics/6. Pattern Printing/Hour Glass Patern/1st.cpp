//  Hour Glass using Star Pattern

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Number = ";
    cin >> n;

    //  Upper Half of the Hour Glass
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //  Lower Half of the Hour Glass
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*
Output

Number = 5
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********


Number = 10
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************


*/