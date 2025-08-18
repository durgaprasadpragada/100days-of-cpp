#include <iostream>
using namespace std;

// break → exit loop immediately.
// continue → skip current iteration and go to next.

int main()
{
    for (int i = 1; i <= 15; i++)
    {
        if (i == 5)
            continue;
        if (i == 9)
            break;
        cout << "Iteration: " << i << "\n";
    }

    return 0;
}