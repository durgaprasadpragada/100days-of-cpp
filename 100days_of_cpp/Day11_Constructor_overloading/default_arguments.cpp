#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // constructor with default arguments
    Student(string n = "unknown", int a = 0)
    {
        name = n;
        age = a;
        cout << "Constructor called with name: " << name << ", Age: " << age << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main()
{
    Student s1; // uses default values
    s1.display();

    Student s2("Prasad"); // only name given, age=default(0)
    s2.display();

    Student s3("Sai", 21); // both values given
    s3.display();

    return 0;
}
/*
OUTPUT:
Constructor called with Name: Unknown, Age: 0
Name: Unknown, Age: 0
Constructor called with Name: Alice, Age: 0
Name: Alice, Age: 0
Constructor called with Name: Bob, Age: 21
Name: Bob, Age: 21
*/