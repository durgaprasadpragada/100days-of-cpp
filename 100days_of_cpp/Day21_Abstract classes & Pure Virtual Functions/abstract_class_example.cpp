// Real-Life Example (Abstract Base Class)
#include <iostream>
using namespace std;

// Abstract class
class Employee
{
public:
    virtual void work() = 0; // Pure virtual function
};
class Developer : public Employee
{
public:
    void work() override
    {
        cout << "Developer is writing code..." << endl;
    }
};

class Manager : public Employee
{
public:
    void work() override
    {
        cout << "Manager is managing the team..." << endl;
    }
};

int main()
{
    Employee *e; // Base class pointer

    Developer d;
    Manager m;

    e = &d;
    e->work(); // Developer's work()

    e = &m;
    e->work(); //<anager's work()

    return 0;
}
