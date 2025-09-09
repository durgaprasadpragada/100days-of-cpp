#include <iostream>
using namespace std;

// Functions can throw exceptions, and caller handles them.
double divide(double a, double b)
{
    if (b == 0)
        throw "Cannot Divide by Zero";
    return a / b;
}
int main()
{
    try
    {
        cout << divide(10, 2) << endl;
        cout << divide(10, 0) << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }
    return 0;
}