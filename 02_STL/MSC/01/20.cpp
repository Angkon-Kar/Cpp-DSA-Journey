#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v{1,2,3,4,5,6,7};
    v.erase(v.begin() + 2, v.begin() + 5); // it removes the elements from index 2 to index 4 which are 3, 4, and 5
    cout << v.size() << endl; // output: 4
    for (auto &x : v)
    {
        cout << x << ' '; // output: 1 2 6 7
    }
    return 0;
}