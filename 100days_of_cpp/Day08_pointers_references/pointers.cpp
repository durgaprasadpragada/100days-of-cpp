/*
What is a Pointer?
A pointer is a variable that stores the address of another variable.
Normally variables store values, but pointers store locations in memory (RAM).
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x; // pointer to int

    cout << "value of x: " << x << "\n";
    cout << "Address of x: " << &x << "\n";
    cout << "pointer stores: " << ptr << "\n";
    cout << "value at pointer: " << *ptr << "\n";

    return 0;
}
