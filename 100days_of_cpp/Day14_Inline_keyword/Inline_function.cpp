/*
What is an Inline Function?
Normally, when you call a function → control goes to the function’s code (function call overhead).
Inline functions remove this overhead by replacing the function call with the actual function code during compilation.
Declared with the inline keyword
*/

#include <iostream>
using namespace std;

// Inline function definition
inline int sqrt(int n)
{
    return n * n;
}
int main()
{
    cout << "Square root of 5 is : " << sqrt(5) << endl;
    cout << "Square root of 10 is : " << sqrt(10) << endl;
    return 0;
}