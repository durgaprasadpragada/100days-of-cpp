// Single Inheritance (with private data)

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Student : public Person
{
private:
    int rollNo;

public:
    void setRoll(int r)
    {
        rollNo = r;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age
             << ", Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1;
    s1.setDetails("Alice", 20);
    s1.setRoll(101);
    s1.display();

    return 0;
}
