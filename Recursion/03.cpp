#include <bits/stdc++.h>
using namespace std;

void func(int n){
	//base case
	if(n==0) return;
	
	//function body
	int last_digit = n%10;
	cout<<last_digit<<" ";
	n/=10;
	func(n);
	
}

int main() {
	func(3648);
	//8 4 6 3
	return 0;
}