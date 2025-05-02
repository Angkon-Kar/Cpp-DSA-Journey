//  switch_case.cpp – Switch-case example with break, default

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a number (1 to 7) for the day of the week: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}

/*
---------------------------------------------------------
🧠 Summary: switch-case Statement in C++
---------------------------------------------------------

📌 Used to select one option from many based on a value.

🔹 `case` matches against values.
🔹 `break` exits the switch after a match (prevents fall-through).
🔹 `default` runs if no case matches.

✅ Example:
    day = 3
    → Output: Wednesday

⚠️ Without `break`, all subsequent cases will run (fall-through).
*/
