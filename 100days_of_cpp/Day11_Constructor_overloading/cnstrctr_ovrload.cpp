#include <iostream>
using namespace std;

/*
If you know nothing → use default constructor.
If you only know the name → use single-parameter constructor.
If you know both name and age → use two-parameter constructor.
*/
class Student
{
private:
    string name;
    int age;

public:
    // Default Constructor
    Student()
    {
        name = "unknown";
        age = 0;
        cout << "Default Constructor called" << endl;
    }
    // Parameterized Constructor(1 parameter)
    Student(string n)
    {

        name = n;
        age = 0;
        cout << "Constructor with name parameter called" << endl;
    }
    // Parameterized Constructor (2 parameters)
    Student(string n, int a)
    {
        name = n;
        age = a;
        cout << "Constructor with name & age parameter called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age " << age << endl;
    }
};

int main()
{
    Student s1; // Calls default constructor
    s1.display();

    Student s2("Alice"); // Calls constructor with 1 parameter
    s2.display();

    Student s3("Bob", 20); // Calls constructor with 2 parameters
    s3.display();

    return 0;
}
/*
OUTPUT: Default Constructor called
Name: unknown, Age 0
Constructor with name parameter called
Name: Alice, Age 0
Constructor with name & age parameter called
Name: Bob, Age 20
*/