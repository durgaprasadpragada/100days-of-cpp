#include <iostream>
using namespace std;

// do-while loop : Similar to while, but executes at least once even if condition is false.
int main()
{
    int i = 1;
    do
    {
        cout << "Iteration: " << i << "\n";
        i++;
    } while (i > 5);

    return 0;
}