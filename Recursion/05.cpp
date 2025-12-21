// Given an integer n(1 <= n <= 100000), print the digits of n in actual order using recursion.
#include <bits/stdc++.h>
using namespace std;

void func(int n){
	//base case
	if(n==0) return;
	
	//function body
	int last_digit = n%10;
	n/=10;
	func(n);
	
	cout<<last_digit<<" ";
}

int main() {
	func(3648);
	//3 6 4 8
	return 0;
}