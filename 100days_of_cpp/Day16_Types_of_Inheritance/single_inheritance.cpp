/*
Single Inheritance:
One base class, one derived class.
Most common form of inheritance.
*/
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

int main()
{
    Dog d;
    d.eat();  // Inherited
    d.bark(); // Own function
    return 0;
}