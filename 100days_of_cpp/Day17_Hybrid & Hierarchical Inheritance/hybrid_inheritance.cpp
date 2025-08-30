#include <iostream>
using namespace std;

class Person
{
public:
    void showPerson()
    {
        cout << "I am a Person" << endl;
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

class Teacher : public Person
{
public:
    void showTeacher()
    {
        cout << "I am a Teacher" << endl;
    }
};

class TeachingAssistant : public Student, public Teacher
{
public:
    void showTA()
    {
        cout << "I am a Teaching Assistant" << endl;
    }
};

int main()
{
    TeachingAssistant ta;
    ta.showStudent();
    ta.showTeacher();
    ta.showTA();
    // ta.showPerson(); // ❌ Ambiguity if called directly (diamond problem)
    return 0;
}