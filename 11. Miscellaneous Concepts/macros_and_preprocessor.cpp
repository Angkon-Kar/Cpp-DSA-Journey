//  macros_and_preprocessor.cpp – #define, #include, #ifdef

#include <iostream>
#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
#define DEBUG

using namespace std;

int main() {
    double radius = 5.0;
    double area = AREA(radius);

    cout << "Area of circle with radius " << radius << " is: " << area << endl;

#ifdef DEBUG
    cout << "[DEBUG] Radius used: " << radius << endl;
    cout << "[DEBUG] Area computed: " << area << endl;
#endif

    /*
    Output:
    Area of circle with radius 5 is: 78.5398
    [DEBUG] Radius used: 5
    [DEBUG] Area computed: 78.5398
    */

    return 0;
}