/*
Multilevel Inheritance:
A derived class becomes the base class for another class.
*/
#include <iostream>
using namespace std;

class Person
{
public:
    void showPerson()
    {
        cout << "I am a person" << endl;
    }
};

class Student : public Person
{
public:
    void showStudent()
    {
        cout << "I am a student" << endl;
    }
};

class Graduate : public Student
{
public:
    void showGraduate()
    {
        cout << "I am a Graduate student" << endl;
    }
};

int main()
{
    Graduate g;
    g.showPerson();
    g.showStudent();
    g.showGraduate();
    return 0;
}
