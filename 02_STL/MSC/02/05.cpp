#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>v{1,3,11,6,8,9};
    int mx= max_element(v.begin(),v.end()) - v.begin();
    cout << v[mx] << endl;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}

/*
Output: 11
*/

/*
Explanation:
The code finds the maximum element in the vector using `max_element` and then prints that element directly.
*/