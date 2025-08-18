#include <iostream>
using namespace std;

// Nested Loops
// Loop inside another loop.
// Commonly used in patterns, matrices.

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "(" << i << "," << j << ")";
        }
        cout << "\n";
    }

    return 0;
}