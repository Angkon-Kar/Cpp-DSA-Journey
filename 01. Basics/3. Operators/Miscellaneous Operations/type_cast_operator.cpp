#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    double b = 5.5;
    // Implicit cast
    double c = a; // c is now 10.0
    // Explicit cast using C-style cast
    int d = (int)b; // d is now 5
    // Explicit cast using static_cast
    int e = static_cast<int>(b); // e is now 5
    cout << "c = " << c << ", d = " << d << ", e = " << e << endl;
    return 0;
}