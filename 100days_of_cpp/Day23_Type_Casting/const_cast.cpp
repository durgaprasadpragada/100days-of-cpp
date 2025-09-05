#include <iostream>
using namespace std;

void printValue(int *x)
{
    *x = *x + 10; // modifies the value
    cout << "Value inside function: " << *x << endl;
}
int main()
{
    const int a = 5;
    // printValue(&a); [[Error: cannot pass const int* to int*]]
    // Correct way using const_cast
    printValue(const_cast<int *>(&a));
    cout << "Value of a (undefined behavior since a is const): " << a << endl;
    return 0;
}