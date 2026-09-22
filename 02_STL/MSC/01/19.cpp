#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v{1,2,3,4,5};
    v.erase(v.begin() + 1); // it removes the element at index 1 which is 2
    cout << v.size() << endl; // output: 4
    for (auto &x : v)
    {
        cout << x << ' '; // output: 1 3 4 5
    }


return 0;
}