//  Program to check if a triangle is scalene, isosceles or equilateral

#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    // First, check if the sides can form a valid triangle
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        if (side1 == side2 && side2 == side3)
        {
            cout << "The triangle is Equilateral.";
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            cout << "The triangle is Isosceles.";
        }
        else
        {
            cout << "The triangle is Scalene.";
        }
    }
    else
    {
        cout << "The given sides do not form a valid triangle.";
    }

    return 0;
}

/*
💡 How It Works:
An equilateral triangle has all three sides equal.

An isosceles triangle has any two sides equal.

A scalene triangle has no equal sides.

It also includes a validity check using the triangle inequality theorem.


✅ Sample Outputs:

👉 Case 1: All sides equal (Equilateral)
Input:
Enter the lengths of the three sides of the triangle: 5 5 5

Output:
The triangle is Equilateral.


👉 Case 2: Two sides equal (Isosceles)
Input:
Enter the lengths of the three sides of the triangle: 5 5 3

Output:
The triangle is Isosceles.


👉 Case 3: All sides different (Scalene)
Input:
Enter the lengths of the three sides of the triangle: 4 5 6

Output:
The triangle is Scalene.


❌ Case 4: Invalid triangle
Input:
Enter the lengths of the three sides of the triangle: 1 2 3

Output:
The given sides do not form a valid triangle.
(This fails the triangle inequality: 1 + 2 is not greater than 3.)
*/