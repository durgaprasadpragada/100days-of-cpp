#include <iostream>
using namespace std;

class Student
{       // Class definition
public: // Access specifier
    string name;
    int age;

    void display() // Member function
    {
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main()
{
    Student s1; // Object created
    s1.name = "Prasad";
    s1.age = 21;

    s1.display(); // Call function of class

    return 0;
}

/*
class Student → defines properties (data) & behaviors (functions).
s1 → object of Student.
s1.name = "prasad"; → accessing class data.
s1.display() → calling method
*/