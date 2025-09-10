// Demonstrates both writing & reading in one program.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing into a file "data.txt"
    fstream file;
    file.open("data.txt", ios::out); // open for writing
    file << "C++ File Handling is Coooool!" << endl;
    file.close();

    // Reading from a file "data.txt"
    file.open("data.txt", ios::in); // open for reading
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}