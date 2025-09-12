#include <iostream>
namespace Outer {
    namespace Inner {
        void message() {
            std::cout << "Hello from Inner namespace!" << std::endl;
        }
    }
}

int main() {
    Outer::Inner::message();
    return 0;
}

