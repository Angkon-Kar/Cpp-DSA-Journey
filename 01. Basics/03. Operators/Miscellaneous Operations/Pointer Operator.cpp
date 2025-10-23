//  The pointer operator is used to access the value at a given memory address.

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int b = *ptr; // b is assigned the value at the address held by ptr
    cout << "Value pointed to by ptr: " << b << endl;
    return 0;
}
// Value pointed to by ptr: 10