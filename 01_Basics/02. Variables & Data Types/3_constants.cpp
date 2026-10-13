/*
    constants.cpp – const keyword and #define macros
*/

#include <iostream>
using namespace std;

// Defining macro constants using #define
#define PI 3.1416
#define MAX_LIMIT 100

int main() {
    // Using const keyword (type-safe)
    const int rollNumber = 25;
    const double gravity = 9.8;

    // Printing values of constants
    cout << "Using #define Macros:" << endl;
    cout << "PI = " << PI << endl;
    cout << "MAX_LIMIT = " << MAX_LIMIT << endl;

    cout << "\nUsing const keyword:" << endl;
    cout << "rollNumber = " << rollNumber << endl;
    cout << "gravity = " << gravity << endl;

    // Uncommenting below lines will cause errors
    // rollNumber = 30;   // ❌ Error: Cannot modify const
    // PI = 3.14;         // ❌ Error: Cannot modify macro

    return 0;
}

/*
----------------------------
🔍 Summary: const vs #define
----------------------------

| Feature         | const               | #define            |
|-----------------|---------------------|---------------------|
| Type-safe       | ✅ Yes              | ❌ No              |
| Scoped          | ✅ Yes (block/local)| ❌ No (global only)|
| Debuggable      | ✅ Yes              | ❌ No              |
| Reassignable    | ❌ No               | ❌ No              |
| Preferred Use   | ✅ Use const for variables with types
*/
