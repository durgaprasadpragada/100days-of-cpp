/*
Use static_cast for normal type conversions.
Use dynamic_cast for safe downcasting in polymorphism.
*/
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};
class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class" << endl;
    }
    void special()
    {
        cout << "Special function of Derived" << endl;
    }
};
int main()
{
    Base *b = new Derived;
    // Dynamic casting (safe downcasting)
    Derived *d = dynamic_cast<Derived *>(b);
    if (d)
    {
        d->show();    // Derived class
        d->special(); // Special function of Derived
    }
    // Static casting (less safe)
    Base *b2 = new Base;
    Derived *d2 = static_cast<Derived *>(b2); // Compiler allows it
    // Runtime error if you call d2->special()
    delete b;
    delete b2;
    return 0;
}