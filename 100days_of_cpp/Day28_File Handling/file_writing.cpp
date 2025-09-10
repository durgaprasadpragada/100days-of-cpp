#include <iostream>
#include <fstream>
using namespace std;

/*
ofstream → write to file (output stream)
ifstream → read from file (input stream)
fstream → both read & write
*/
int main()
{
    ofstream file("example.txt"); // open file for writing
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    file << "Hello, C++ File Handling!" << endl;
    file << "This text is saved permanently." << endl;
    file.close();
    cout << "Data written to file successfully!" << endl;
    return 0;
}