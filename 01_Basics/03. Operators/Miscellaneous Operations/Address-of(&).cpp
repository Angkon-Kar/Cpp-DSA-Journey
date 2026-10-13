//   The address-of operator returns the memory address of its operand.
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a; // ptr holds the address of a
    cout << "Address of a: " << ptr << endl;
}