#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum of " << a << " and " << b << " is:" << a + b;
}

int main()
{
    int x = 10, y = 20;
    add(x, y); // Passing arguments
    return 0;
}