#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> students;

    // Insert elements
    students[1] = "Alice";
    students[2] = "Bob";
    students[5] = "Charlie";

    // Another way
    students.insert({3, "David"});

    // Traverse
    for (auto &p : students)
    {
        cout << p.first << " → " << p.second << endl;
    }

    // Find
    if (students.find(2) != students.end())
    {
        cout << "Found: " << students[2] << endl;
    }

    // Erase
    students.erase(3);

    cout << "After erase:" << endl;
    for (auto &p : students)
    {
        cout << p.first << " → " << p.second << endl;
    }
}
