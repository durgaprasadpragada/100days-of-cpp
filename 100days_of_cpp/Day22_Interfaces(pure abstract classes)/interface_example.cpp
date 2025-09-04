#include <iostream>
using namespace std;

// Interface (pure abstract class)
class IShape
{
public:
    virtual void draw() = 0;
    virtual double area() = 0;
};
class Circle : public IShape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
    double area() override
    {
        return 3.14 * radius * radius;
    }
};
class Square : public IShape
{
    double side;

public:
    Square(double s) : side(s) {}
    void draw() override
    {
        cout << "Drawing Square" << endl;
    }
    double area() override
    {
        return side * side;
    }
};
int main()
{
    IShape *shape;
    Circle c(5);
    Square s(4);

    shape = &c;
    shape->draw();
    cout << "Area: " << shape->area() << endl;

    shape = &s;
    shape->draw();
    cout << "Area: " << shape->area() << endl;

    return 0;
}