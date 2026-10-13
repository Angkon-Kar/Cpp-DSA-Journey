#include <iostream>
using namespace std;
int main()
{
    int a = 5;                   // binary: 0000 0101
    int b = ~a;                  // binary: 1111 1010 (two's complement representation)
    cout << "b = " << b << endl; // b is -6 in two's complement

    return 0;
}