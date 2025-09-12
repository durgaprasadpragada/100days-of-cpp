#include <iostream>
using namespace std;

// Defining a namespace
namespace MyNamespace {
    int value = 42;

    void display() {
        cout << "Value inside MyNamespace: " << value << endl;
    }
}

int main() {
    // Accessing using namespace name
    cout << MyNamespace::value << endl;
    MyNamespace::display();

    return 0;
}

