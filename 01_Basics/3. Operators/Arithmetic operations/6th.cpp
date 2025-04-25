#include <iostream>
using namespace std;
int main() {

    int a=10, b=20, c;
    
    /*  10   9       19   20     9   20     10   19  */
    c = a-- -a++ + --b - ++b + --a - b-- + ++a - b++;

    cout<<a<<endl;//10
    cout<<b<<endl;//20
    cout<<c<<endl;//-20
    
    return 0;
}
