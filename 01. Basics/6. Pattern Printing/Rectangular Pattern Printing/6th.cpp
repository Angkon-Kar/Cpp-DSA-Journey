/*
    Rectangular Pattern (Coordinates)
*/

#include <iostream>
using namespace std;

int main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 6; j >= 1; j--)
        {
            cout << "(" << i << "," << j << ")";
        }
        cout << endl;
    }
}
/*
    Outputs
    (5,6)(5,5)(5,4)(5,3)(5,2)(5,1)
    (4,6)(4,5)(4,4)(4,3)(4,2)(4,1)
    (3,6)(3,5)(3,4)(3,3)(3,2)(3,1)
    (2,6)(2,5)(2,4)(2,3)(2,2)(2,1)
    (1,6)(1,5)(1,4)(1,3)(1,2)(1,1)
*/