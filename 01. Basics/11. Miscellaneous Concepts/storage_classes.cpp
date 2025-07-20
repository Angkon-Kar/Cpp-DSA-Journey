//  storage_classes.cpp – auto, register, static, extern

#include <iostream>
using namespace std;

// extern variable declaration
extern int extVar;

void demoStatic() {
    static int count = 0;
    count++;
    cout << "Static count: " << count << endl;
}

int main() {
    auto x = 10;              // auto infers int
    register int y = 5;       // request fast access (mostly ignored by modern compilers)

    cout << "Auto x: " << x << endl;
    cout << "Register y: " << y << endl;

    demoStatic();
    demoStatic();
    demoStatic();

    // extern variable usage
    cout << "Extern variable extVar: " << extVar << endl;

    /*
    Output:
    Auto x: 10
    Register y: 5
    Static count: 1
    Static count: 2
    Static count: 3
    Extern variable extVar: 100
    */

    return 0;
}

// extern variable definition
int extVar = 100;