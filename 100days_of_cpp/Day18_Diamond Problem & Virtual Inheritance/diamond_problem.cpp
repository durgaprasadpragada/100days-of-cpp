#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A function" << endl;
    }
};
class B : public A{};
class C : public A{};
class D : public B, public C{};

int main()
{
    D obj;
    // obj.display();  // ❌ Error: Ambiguous, two copies of A
    obj.B::display(); // ✅ Specify path
    obj.C::display(); // ✅ Specify path
    return 0;
}
