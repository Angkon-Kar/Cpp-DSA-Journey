#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "OpenAI creates powerful AI models";

    // length()
    cout << "Length: " << text.length() << endl;

    // substr(start, length)
    string sub = text.substr(7, 7);
    cout << "Substring: " << sub << endl;

    // find()
    size_t pos = text.find("AI");
    cout << "Found 'AI' at: " << pos << endl;

    // compare()
    string a = "apple";
    string b = "banana";
    int cmp = a.compare(b);
    cout << "Compare 'apple' with 'banana': " << cmp << endl;

    return 0;
}

/*
Output:
Length: 33
Substring: creates
Found 'AI' at: 5
Compare 'apple' with 'banana': -1
*/
