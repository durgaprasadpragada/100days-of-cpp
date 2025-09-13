#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor called!" << endl; }
    ~Demo() { cout << "Destructor called!" << endl; }
};

void func2() {
    Demo d2;
    cout << "Inside func2()" << endl;
    throw runtime_error("Exception in func2");
}

void func1() {
    Demo d1;
    cout << "Inside func1()" << endl;
    func2();
}

int main() {
    try {
        func1();
    } catch (const exception& e) {
        cout << "Caught Exception: " << e.what() << endl;
    }
    return 0;
}

/*
output:
Constructor called!
Inside func1()
Constructor called!
Inside func2()
Destructor called!   ← d2 destroyed (stack unwinding)
Destructor called!   ← d1 destroyed
Caught Exception: Exception in func2
*/
