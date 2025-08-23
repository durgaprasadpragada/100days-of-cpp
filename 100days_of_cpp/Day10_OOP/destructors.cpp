#include <iostream>
using namespace std;

// Destructor: Called when object is destroyed (memory cleanup)
class Demo
{
public:
    Demo()
    {
        cout << "Constructor called!\n";
    }
    ~Demo()
    {
        cout << "Destructor called!\n";
    }
};

int main()
{
    Demo d; // Constructor runs here
} // Destructor runs automatically here