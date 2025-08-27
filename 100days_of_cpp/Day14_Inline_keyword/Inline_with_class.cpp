/*
What is an Inline Function?
Normally, when you call a function → control goes to the function’s code (function call overhead).
Inline functions remove this overhead by replacing the function call with the actual function code during compilation.
Declared with the inline keyword*/

#include <iostream>
using namespace std;

class Calculator
{
public:
    // Inline function inside class
    inline int add(int a, int b)
    {
        return a + b;
    }
    inline int multiply(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    Calculator calc;
    cout << "Addition of 2 and 3 is: " << calc.add(2, 3) << endl;
    cout << "Multiplication of 2 and 3 is: " << calc.multiply(2, 3);
    return 0;
}
/*
Key Points:
Faster execution (no function call overhead).
Best for small functions.
The compiler may ignore inline if function is too complex.
*/