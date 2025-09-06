#include <iostream>
using namespace std;

template <typename T = int>
T multiply(T a, T b)
{
    return a * b;
}
int main()
{
    // If type is not specified, it defaults to int.
    cout << "Multiply ints: " << multiply(4, 5) << endl;        // int (default)
    cout << "Multiply doubles: " << multiply(2.5, 5.1) << endl; // double
    return 0;
}