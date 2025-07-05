#include <iostream>
using namespace std;

int main()
{
    int x = 42;
    int *ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer value (address stored in ptr): " << ptr << endl;
    cout << "Dereferenced value (*ptr): " << *ptr << endl;

    return 0;
}

/*
Output:
Value of x: 42
Address of x: 0x... (will vary)
Pointer value (address stored in ptr): 0x... (same as above)
Dereferenced value (*ptr): 42
*/
