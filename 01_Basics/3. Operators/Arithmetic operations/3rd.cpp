//  Decrement Operator

#include <iostream>
using namespace std;

int main()
{
    //  Decrement Operator
    //  --i (Pre decrement)
    //  i-- (Post decrement)

    int i = 1;
    cout << i-- << endl;    //  Use, Then decrease
    cout << i << endl;

    cout << --i << endl;    // decrease, then use
    cout << i << endl;
    return 0;
}