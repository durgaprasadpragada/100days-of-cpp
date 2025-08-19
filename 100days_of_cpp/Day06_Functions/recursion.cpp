#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
        return 1;                    // Base case
    return num * factorial(num - 1); // Recursive case
}

int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num);
    return 0;
}