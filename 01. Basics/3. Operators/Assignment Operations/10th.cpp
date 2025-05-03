#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20, c;

    // Post-increment
    c = a++;
    cout << "Post-increment (c = a++): c = " << c << ", a = " << a << endl;

    // Pre-increment
    c = ++a;
    cout << "Pre-increment (c = ++a): c = " << c << ", a = " << a << endl;

    // Post-decrement
    c = a--;
    cout << "Post-decrement (c = a--): c = " << c << ", a = " << a << endl;

    // Pre-decrement
    c = --a;
    cout << "Pre-decrement (c = --a): c = " << c << ", a = " << a << endl;


    return 0;
}

/*
    OUTPUT
    Post-increment (c = a++): c = 10, a = 11
    Pre-increment (c = ++a): c = 12, a = 12
    Post-decrement (c = a--): c = 12, a = 11
    Pre-decrement (c = --a): c = 10, a = 10
*/