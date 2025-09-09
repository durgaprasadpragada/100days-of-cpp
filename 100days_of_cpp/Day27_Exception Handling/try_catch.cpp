#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0;
    try
    {
        if (b == 0)
            throw "Divide by zero error !";
        cout << "Division a/b : " << a / b << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception caught: " << msg << endl;
    }
    cout << "Program continues..." << endl;
}