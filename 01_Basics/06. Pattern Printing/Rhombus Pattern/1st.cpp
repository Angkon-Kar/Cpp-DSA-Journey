#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Rhombus Row Number = ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*
Output

Rhombus Row Number = 4
    ****
   ****
  ****
 ****

Rhombus Row Number = 10
          **********
         **********
        **********
       **********
      **********
     **********
    **********
   **********
  **********
 **********
*/