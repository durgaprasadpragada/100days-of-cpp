/*
REFERENCE:
A reference is an alias (another name) for a variable.
Unlike pointers, references cannot be NULL or changed to refer to another variable.
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 28;
    int &ref = x; // ref is another name for x

    cout << "x: " << x << ", ref: " << ref << "\n";
    ref = 48; // changes x as well
    cout << "x: " << x << ", ref: " << ref;
}