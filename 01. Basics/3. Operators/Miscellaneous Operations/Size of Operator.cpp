#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    double b = 20.0;
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of double: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    return 0;
}