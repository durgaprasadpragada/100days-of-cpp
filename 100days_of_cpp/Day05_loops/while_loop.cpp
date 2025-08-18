#include <iostream>
using namespace std;

// while loop : Used when we don’t know the number of repetitions beforehand.
int main()
{
    int i = 1;
    while (i <= 5)
    {
        cout << "Iteration: " << i << "\n";
        i++;
    }

    return 0;
}