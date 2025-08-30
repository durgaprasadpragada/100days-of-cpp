/*
Hierarchical Inheritance:
One base class → Multiple derived classes.
Like a family tree
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
    void Bark()
    {
        cout << "Barking..." << endl;
    }
};
class Cat : public Animal
{
public:
    void Meow()
    {
        cout << "Meowing..." << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    d.eat();  // From Animal
    d.Bark(); // Dog-specific

    c.eat();  // From Animal
    c.Meow(); // Cat-specific

    return 0;
}