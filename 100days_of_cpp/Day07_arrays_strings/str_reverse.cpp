#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed string: ";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i]; // start from last char and move backward
    }
    cout << "\n";
    return 0;
}
