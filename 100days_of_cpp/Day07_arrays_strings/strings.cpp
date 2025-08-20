#include <iostream>
#include <string> // Why this? → This header brings the definition of std::string

using namespace std;

int main()
{
    string name;
    cout << "Enter your full name: ";
    getline(cin, name); // reads spaces too (cin alone can’t)

    cout << "Your name is: " << name << "\n";
    cout << "Length of name: " << name.length() << "\n";
    cout << "First character: " << name[0] << "\n";

    return 0;
}
/*
getline(cin, name) → takes full input line until user presses Enter.

name.length() → calls the length() method from the string class.

name[0] → accesses the first character (arrays + strings both use indexing)
*/