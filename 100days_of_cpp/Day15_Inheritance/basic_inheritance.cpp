// Basic Inheritance

#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    void start()
    {
        cout << "Vehicle started" << endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is driving" << endl;
    }
};

int main()
{
    Car myCar;
    myCar.start(); // Inherited from Vehicle
    myCar.drive(); // Car’s own function

    return 0;
}
