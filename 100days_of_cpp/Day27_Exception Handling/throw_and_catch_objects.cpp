// Throwing and Catching Objects
#include <iostream>
#include <string>
using namespace std;

// We can define custom exception classes for better error handling.
class MyException
{
    string message;

public:
    MyException(string msg) : message(msg) {}
    string what()
    {
        return message;
    }
};

int main()
{
    try
    {
        throw MyException("Custom Exception Occurred!");
    }
    catch (MyException &e)
    {
        cout << "Caught Exception: " << e.what() << endl;
    }
    return 0;
}
