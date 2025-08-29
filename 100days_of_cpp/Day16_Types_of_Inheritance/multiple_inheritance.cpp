/*
Multiple Inheritance:
One derived class inherits from more than one base class
*/
#include <iostream>
using namespace std;

class Engine
{
public:
    void engineType()
    {
        cout << "V8 Engine.." << endl;
    }
};
class Wheels
{
public:
    void wheelType()
    {
        cout << "Alloy Wheels" << endl;
    }
};

class Car : public Engine, public Wheels
{
public:
    void showCar()
    {
        cout << "This is a sports car..." << endl;
    }
};

int main()
{
    Car c;
    c.engineType();
    c.wheelType();
    c.showCar();
    return 0;
}