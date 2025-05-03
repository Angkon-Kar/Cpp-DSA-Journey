#include <iostream>
using namespace std;

int main() {

    int a=1;
    int b=2;
    int c;
    
    /*  1   2   1     2       3     4 */
    c = a + b + a++ + b++ + ++a + ++b;
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
}

    /* 
    a = 3
    b = 4
    c = 13
    */
