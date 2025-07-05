#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    cout << "Current *ptr: " << *ptr << endl;
    ptr++; // Move to next element
    cout << "After ptr++: " << *ptr << endl;
    ptr--; // Move back to original
    cout << "After ptr--: " << *ptr << endl;

    return 0;
}

/*
Output:
Current *ptr: 10
After ptr++: 20
After ptr--: 10
*/
