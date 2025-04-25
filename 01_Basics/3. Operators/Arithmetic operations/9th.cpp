#include <iostream>
using namespace std;

int main() {

    int a = 1, b = 2, c = 3;

    /*      1    2    3 */
    int X = a-- - b-- -c--;

    cout << a << endl;  //0
    cout << b << endl;  //1
    cout << c << endl;  //2
    cout << X << endl;  //-4
    
    return 0;
}
