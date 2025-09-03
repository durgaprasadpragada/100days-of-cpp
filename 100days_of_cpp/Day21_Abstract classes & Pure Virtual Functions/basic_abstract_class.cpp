/*
An abstract class is a class that cannot be instantiated. It is meant to be used only as a base class.
A class becomes abstract when it has at least one pure virtual function.
*/

#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    Shape *s; // Base class pointer
    Circle c;
    Rectangle r;

    s = &c;
    s->draw(); // Calls Circle's draw()

    s = &r; // Calls Rectangle's draw()
    s->draw();

    // Shape s1; [[Error: u cannot instantiate abstract class]]
    return 0;
}