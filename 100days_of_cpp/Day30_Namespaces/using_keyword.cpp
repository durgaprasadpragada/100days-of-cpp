#include <iostream>
using namespace std;

namespace First {
    void hello() {
        cout << "Hello from First namespace" << endl;
    }
}

namespace Second {
    void hello() {
        cout << "Hello from Second namespace" << endl;
    }
}

int main() {
    First::hello();   // Access with scope resolution
    Second::hello();

    using namespace First;  // Now we can use directly
    hello();

    return 0;
}

