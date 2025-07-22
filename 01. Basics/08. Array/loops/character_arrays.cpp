#include <iostream>
using namespace std;

int main()
{
    char name[100];

    cout << "Enter your name: ";
    cin.getline(name, 100); // reads a line including spaces

    cout << "Hello, " << name << "!" << endl;

    return 0;
}

/*
Sample Input:
Enter your name: Alice Wonderland

Output:
Hello, Alice Wonderland!
*/