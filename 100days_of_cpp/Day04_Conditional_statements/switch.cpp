#include <iostream>
using namespace std;

/* switch case: 
Used when we have multiple options for one variable.
Works with int, char, enum (not string directly in C++).
*/
int main()
{
    int choice;
    cout << "Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice)
    {
    case 1:
    {
        cout << "Result = " << a + b << "\n";
        break;
    }
    case 2:
    {
        cout << "Result = " << a - b << "\n";
        break;
    }
    case 3:
    {
        cout << "Result = " << a * b << "\n";
        break;
    }
    case 4:
    {
        if (b != 0)
        {
            cout << "Result = " << (float)a / b << "\n";
        }
        else
        {
            cout << "Error: Division by zero!\n";
        }
        break;
    }
    default:
    {
        cout << "Invalid choice!\n";
    }
    }

    return 0;
}