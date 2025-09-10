#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("example.txt"); // open file for reading
    if (!file)
    {
        cout << "File not found!" << endl;
        return 1;
    }
    string line;
    while (getline(file, line))
    {
        cout << line << endl; // This reads the contents of example.txt and displays it.
    }
    file.close();
    return 0;
}