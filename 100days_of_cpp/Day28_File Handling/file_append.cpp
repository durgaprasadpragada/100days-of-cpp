#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("example.txt", ios::app); // open in append mode
    // Now the file won’t be overwritten, it will just add more text.
    file << "Adding a new line at the end." << endl;
    file.close();
    cout << "New line appended to file!" << endl;
    return 0;
}

// now run file_reading.cpp to see appended line...