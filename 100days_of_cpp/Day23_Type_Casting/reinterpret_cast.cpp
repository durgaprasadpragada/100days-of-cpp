/*
Used for low-level casting between unrelated pointer types.
It’s unsafe, but useful for system-level programming
*/
#include <iostream>
using namespace std;

int main()
{
    int x = 65;
    int *p = &x;
    // Reinterpret int* as char*
    char *c = reinterpret_cast<char *>(p);

    cout << "Integer value: " << x << endl;
    cout << "Character value (reinterpret_cast): " << *c << endl;

    return 0;
}
/*
65 in ASCII corresponds to 'A'.
reinterpret_cast treated the same memory (int*) as a char*.
This is dangerous if misused, because types may not align properly in memory.
*/