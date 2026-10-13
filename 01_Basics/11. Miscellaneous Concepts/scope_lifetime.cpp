//  scope_lifetime.cpp – Global vs local variables

#include <iostream>
using namespace std;

int globalVar = 50; // global variable

void showScope()
{
    int localVar = 10; // local to showScope
    cout << "Inside showScope - localVar: " << localVar << endl;
    cout << "Inside showScope - globalVar: " << globalVar << endl;
}

int main()
{
    int localVar = 20; // local to main

    cout << "Inside main - localVar: " << localVar << endl;
    cout << "Inside main - globalVar: " << globalVar << endl;

    showScope();

    return 0;
}

/*
Output:
Inside main - localVar: 20
Inside main - globalVar: 50
Inside showScope - localVar: 10
Inside showScope - globalVar: 50
*/