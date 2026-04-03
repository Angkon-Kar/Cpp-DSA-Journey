#include<bits/stdc++.h>
using namespace std;

void solve1(){
    vector<int>v{1,2,3,4,5,6,7,8,9};
    int mx=*max_element(v.begin(),v.end());
    cout<<mx<<endl;
}

void solve2(){
    vector<int>v{1,2,3,4,5,6,7,8,9};
    auto mx=max_element(v.begin(),v.end());
    cout<< *mx <<endl;
}

/*
Difference between solve1 and solve2:
- solve1 returns the value of the maximum element directly.
- solve2 returns an iterator to the maximum element, and we dereference it to get the value.
*/


int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    solve1(); // Output: 9
    solve2(); // Output: 9

    return 0;
}