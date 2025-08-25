/*
Static Member Functions
Can only access static data members.
Do not need an object to be called → use ClassName::functionName().
Useful for utilities or class-wide counters.
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
        studentCount++;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    static void displayCount()
    {
        cout << "Total Students: " << studentCount << endl;
    }
};

// Define static variable outside class
int Student::studentCount = 0;

int main()
{
    Student s1("Sai", 22);
    Student s2("Prasad", 21);
    Student s3("Anudeep", 24);

    s1.display();
    s2.display();
    s3.display();

    // Calling static function using class name
    Student::displayCount();

    return 0;
}

/*
OUTPUT:
Name: Charlie, Age: 22
Name: David, Age: 23
Name: Eva, Age: 21
Total Students: 3
*/