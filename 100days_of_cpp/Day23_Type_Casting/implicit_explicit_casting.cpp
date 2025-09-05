/*
Implicit Type Casting (Type Conversion / Promotion)
Done automatically by the compiler.
Example: int → float.

Explicit Type Casting (Type Casting Operator / Casting Keywords)
Done manually by the programmer.
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    double y;
    // Implicit type casting (int → double)
    y = x;
    cout << "Implicit cast(int to double): " << y << endl;
    // Explicit type casting using C-style cast
    double z = (double)x / 3;
    cout << "Explicit cast using (double): " << z << endl;
    // Explicit type casting using static_cast
    double w = static_cast<double>(x) / 3;
    cout << "Explicit cast using static_cast: " << w << endl;

    return 0;
}
