#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

/*
------------------------------------------------------
🧠 Summary: else-if Ladder in C++
------------------------------------------------------

📌 Used when there are multiple conditions to check.
    ➤ The program checks from top to bottom.
    ➤ The first true condition's block is executed.
    ➤ Remaining conditions are skipped after a match.

✅ Example:
    marks = 85
    → First if (marks >= 90) → false
    → Next else if (marks >= 80) → true → prints "Grade: A"

💡 Tip:
    Order of conditions matters in an else-if ladder!
*/
