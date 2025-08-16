#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;

    // Arithmetic
    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";
    cout << "a * b = " << a * b << "\n";
    cout << "a / b = " << a / b << "\n"; // integer division
    cout << "a % b = " << a % b << "\n";

    // Relational
    cout << "a == b: " << (a == b) << "\n";
    cout << "a != b: " << (a != b) << "\n";
    cout << "a > b: " << (a > b) << "\n";
    cout << "a < b: " << (a < b) << "\n";

    // logical
    cout << "(a > 5 && b < 5): " << (a > 5 && b < 5) << "\n";
    cout << "(a > 5 || b < 5): " << (a > 5 && b < 5) << "\n";
    cout << "!(a == b): " << !(a == b) << "\n";

    // Assignment
    int c = a;
    c += b;
    cout << "C after c += b: " << c << "\n";

    return 0;
}