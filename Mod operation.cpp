#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n; // n = 231
    
    int c = n % 10; // c  =1
    n = n / 10; // n = 23
    
    int b = n % 10; // b = 3
    n = n / 10; // n = 2
    
    int a = n % 10; // a = 1
    

    int abc = 0; //abc = 0
    
    abc = abc + a; // abc = 0 + 2 = 2
    abc = abc * 10; // abc = 2 * 10 = 20
    
    abc = abc + b; // abc = 20 + 3 = 23
    abc = abc * 10; // abc = 23 * 10 = 230
    
    abc = abc + c; // abc = 230 + 1 = 231


    int bca = 0; //bca = 0
    
    bca = bca + b; // bca = 0 + 3 = 3
    bca = bca * 10; // bca = 3 * 10 = 30

    bca = bca + c; // bca = 30 + 1 = 31
    bca = bca * 10; // bca = 31 * 10 = 310

    bca = bca + a; // bca = 310 + 2 = 312


    int cab = 0; //cab = 0

    cab = cab + c; // cab = 0 + 1 = 1
    cab = cab * 10; // cab = 1 * 10 = 10

    cab = cab + a; // cab = 10 + 2 = 12
    cab = cab * 10; // cab = 12 * 10 = 120

    cab = cab + b; // cab = 120 + 3 = 123



    cout << abc + bca + cab << endl;


    return 0;
}
