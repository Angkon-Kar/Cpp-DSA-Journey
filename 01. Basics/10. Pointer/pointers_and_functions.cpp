#include <iostream>
using namespace std;

void increment(int *ptr)
{
    (*ptr)++;
}

int main()
{
    int num = 100;
    cout << "Before: " << num << endl;

    increment(&num);

    cout << "After: " << num << endl;

    return 0;
}

/*
Output:
Before: 100
After: 101
*/
