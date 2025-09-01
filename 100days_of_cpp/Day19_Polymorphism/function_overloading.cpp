#include <iostream>
using namespace std;

class Math
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Math obj;
    cout << "Sum (int):" << obj.add(2, 5) << endl;
    cout << "Sum (double):" << obj.add(2.5, 3.5) << endl;
    cout << "Sum (3 ints):" << obj.add(4, 5, 6) << endl;
    return 0;
}