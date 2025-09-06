/*
Normally, if you want a function that works with int, float, double, etc., you’d have to overload it multiple times.
Templates let you write one function and use it for any data type.
*/

#include <iostream>
using namespace std;

// Template definition
template <typename T>
T myMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << "Max of 3 and 7: " << myMax(3, 7) << endl;         // int
    cout << "Max of 3.2 and 5.2: " << myMax(3.2, 5.2) << endl; // double
    cout << "Max of 'p' and 'g': " << myMax('p', 'g') << endl; // char
    return 0;
}