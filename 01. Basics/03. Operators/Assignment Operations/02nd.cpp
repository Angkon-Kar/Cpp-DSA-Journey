//  Increment Operator

#include <iostream>
using namespace std;

int main()
{
    //  Increment Operator
    //  ++i (Pre Increment)
    //  i++ (Post Increment)

    int i = 1;
    cout << i++ << endl;    //  Use, Then Increase
    cout << i << endl;

    cout << ++i << endl;    // Increase, then use
    cout << i << endl;
    return 0;
}