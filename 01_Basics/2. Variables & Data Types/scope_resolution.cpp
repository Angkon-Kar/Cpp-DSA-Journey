/*
    scope_resolution.cpp – Use of :: operator and variable scope
*/

#include <iostream>
using namespace std;

// Global variable
int value = 100;

int main() {
    // Local variable (same name as global)
    int value = 50;

    cout << "Local value: " << value << endl;           // Refers to local variable
    cout << "Global value using scope resolution (::): " << ::value << endl;  // Refers to global variable

    return 0;
}

/*
-----------------------------------------
🧠 Summary: Scope Resolution Operator (::)
-----------------------------------------

📌 Used to access global variables when a local variable has the same name.

🔹 Example:
    int value = 10;       // global
    int main() {
        int value = 5;    // local
        cout << value;    // prints local → 5
        cout << ::value;  // prints global → 10
    }

✅ Also used to access static members of classes or namespaces (in advanced topics).
*/
