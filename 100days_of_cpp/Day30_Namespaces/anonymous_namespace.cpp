#include <iostream>
using namespace std;

namespace {
    void hidden() {
        cout << "I am inside an anonymous namespace" << endl;
    }
}

int main() {
    hidden();
    return 0;
}

