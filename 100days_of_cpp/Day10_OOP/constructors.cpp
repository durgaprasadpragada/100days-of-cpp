#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Constructor: Special functions that run automatically when object is created.
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main()
{
    Student s1("Prasad", 22); // Constructor caled automatically
    s1.display();

    return 0;
}
