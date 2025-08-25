/*
Static Data Members
Belong to the class, not to any object.
Shared by all objects of the class.
Only one copy exists in memory.
Declared with static keyword inside the class.
Must be defined outside the class.
*/

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

    // Static data member
    static int studentCount;

public:
    // Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
        studentCount++; // increment every time a new object created
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Function to show total students(non-static)
    void showCount()
    {
        cout << "Total Students: " << studentCount << endl;
    }
};

// Definition of static member outside the class
int Student::studentCount = 0;

int main()
{
    Student s1("Alice", 20);
    Student s2("Bob", 21);

    s1.display();
    s2.display();

    // Accessing static varibale via non-static method
    s1.showCount();
    s2.showCount();

    return 0;
}
/*
OUTPUT:
Name: Alice, Age: 20
Name: Bob, Age: 21
Total Students: 2
Total Students: 2
*/