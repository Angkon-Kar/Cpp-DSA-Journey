// Given 2 integers a and b,(1 <= a,b <= 10), print a^b using recursion.

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b){
    //base case
    if(b==0) return 1;
    
    //recursive case
    int result ;
    if (b%2 == 0)
    {
        //even
        int temp = power(a, b/2);
        result = temp * temp;
    }
    else{
        //odd
        result = a * power(a, b-1);
    }
    
    return result;
}

int main() {
    int a = 2, b = 5;
    cout << a << "^" << b << " = " << power(a, b) << endl; //2^5 = 32

    a = 3, b = 4;
    cout << a << "^" << b << " = " << power(a, b) << endl; //3^4 = 81

    a = 5, b = 3;
    cout << a << "^" << b << " = " << power(a, b) << endl; //5^3 = 125

    return 0;
}