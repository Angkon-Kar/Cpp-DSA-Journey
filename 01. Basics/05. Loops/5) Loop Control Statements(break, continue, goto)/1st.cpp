#include <iostream>
using namespace std;

int main()
{
    int pocketmoney = 4500;

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue; // Skip Even Dates
        }
        if (pocketmoney == 0)
        {
            break; // Stop if Pocket Money is Depleted
        }
        cout << "Go Out Today!" << endl;
        pocketmoney = pocketmoney - 350; // Spend Money
    }
    return 0;
}

/*

    OUtput =
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!
    Go Out Today!

*/