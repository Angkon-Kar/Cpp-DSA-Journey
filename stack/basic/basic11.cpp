#include <iostream>
using namespace std;

int* stackArr; // Changed to a pointer for dynamic memory allocation
int top = -1;
int maxSize;   // Variable to store the user-defined stack size

void push(int value) {
    // Check against the user-defined maximum size instead of a hardcoded 9
    if (top == maxSize - 1) { 
        cout << "Stack overflow! Cannot push " << value << "." << endl;
        return;
    }
    top++;
    stackArr[top] = value;
    cout << value << " pushed to stack." << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow! Nothing to pop." << endl;
        return;
    }
    cout << "Removed = " << stackArr[top] << endl;   
    top--;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
    // 1. Take the stack size from the user
    cout << "Enter the maximum size of the stack: ";
    cin >> maxSize;

    // Dynamically allocate memory for the array based on user input
    stackArr = new int[maxSize];

    int choice, value;

    // 2. Create an interactive menu loop
    do {
        cout << "\n--- Stack Operations Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4); // Loop continues until user chooses 4

    // Clean up dynamically allocated memory to prevent memory leaks
    delete[] stackArr;

    return 0;
}