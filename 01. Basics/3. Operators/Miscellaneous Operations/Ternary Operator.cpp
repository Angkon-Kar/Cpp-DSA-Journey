//  Example = Find maximum number Between two Numbers

#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int max;
    // If a > b, max is a; otherwise, max is b
    max = (a > b) ? a : b;
    cout << "max = " << max << endl;
    return 0;
}