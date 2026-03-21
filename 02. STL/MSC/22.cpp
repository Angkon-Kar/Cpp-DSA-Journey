#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5,6,7};
    v.insert(v.begin() + 2, v.begin(), v.end()); // it inserts the elements of the vector from index 0 to index 6 at index 2
    for (auto &x : v)
    {
        cout << x << ' '; // output: 1 2 1 2 3 4 5 6 7 3 4 5 6 7
    }
    return 0;
}