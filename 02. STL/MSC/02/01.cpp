#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>v{1,2,3,4,5,6,7,8,9};
    int mx=*max_element(v.begin(),v.end());
    cout<<mx<<endl;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}

/*
Output: 9
*/