/*
    Rectangular Pattern (Coordinates)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }
}
/*
    Outputs
    3 4
    (1,1)(1,2)(1,3)(1,4)
    (2,1)(2,2)(2,3)(2,4)
    (3,1)(3,2)(3,3)(3,4)

    2 3
    (1,1)(1,2)(1,3)
    (2,1)(2,2)(2,3)

    4 4
    (1,1)(1,2)(1,3)(1,4)
    (2,1)(2,2)(2,3)(2,4)
    (3,1)(3,2)(3,3)(3,4)
    (4,1)(4,2)(4,3)(4,4)
*/