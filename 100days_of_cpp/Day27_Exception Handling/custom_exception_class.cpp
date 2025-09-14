#include <iostream>
#include <exception>
using namespace std;

class DivideByZero : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero not allowed!";
    }
};

double divide(double a, double b) {
    if (b == 0) {
        throw DivideByZero();  // throw custom exception
    }
    return a / b;
}

int main() {
    try {
        cout << divide(10, 2) << endl;
        cout << divide(5, 0) << endl;  // throws exception
    }
    catch (const exception& e) {
        cout << "Caught Exception: " << e.what() << endl;
    }
    return 0;
}

