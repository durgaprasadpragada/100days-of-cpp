/*
Stack vs Heap Memory
Stack → automatic memory, variables created inside a function live here, destroyed when function ends.
Heap → dynamic memory, manually created by programmer, stays until you explicitly free it.
*/

#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // allocate int in heap
    *p = 50;          // assign value

    cout << "Value: " << *p << "\n";

    delete p; // free memory
    return 0;
}