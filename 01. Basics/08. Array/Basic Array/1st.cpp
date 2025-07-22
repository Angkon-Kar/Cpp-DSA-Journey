#include <iostream>
using namespace std;

int main()
{

    int marks[4] = {99, 90, 100, 88}; // 4

    marks[0] = 100;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    double price[] = {99.5, 10, 90.5, 40, 50, 100, 88}; // unlimited

    return 0;
}

/*
Output
100
90
100
88
*/