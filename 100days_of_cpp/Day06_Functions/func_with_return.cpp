#include <iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

int main()
{
    int x = 5;
    cout << "Square of " << x << " is: " << square(x);
    return 0;
}