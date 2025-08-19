#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Int sum: " << add(4, 7) << "\n";
    cout << "Double sum: " << add(3.4244, 7.8928);
    return 0;
}