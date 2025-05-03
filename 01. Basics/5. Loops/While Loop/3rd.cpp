#include <iostream>
using namespace std;

int main()
{
    int count = 1, sum = 0, var;
    cout << "Enter The Number Till Which The Sum has to be calculated:";
    cin >> var;
    while (count <= var)
    {
        sum += count;
        count = count + 1;
    }
    cout << "Sum of 1 to " << var << " = " << sum << endl;
    return 0;
}

/*
    Output=

    Enter The Number Till Which The Sum has to be calculated:
    20
    Sum of 1 to 20 = 210
*/