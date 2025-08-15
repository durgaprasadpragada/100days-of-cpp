#include <iostream>
using namespace std;

int main() {
    int age = 21;
    double height = 5.9;
    char grade = 'A';
    bool isStudent = true;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;
    /*endl is used to get immidiate output Inserts a newline and flushes the output buffer.
    Flushing means it forces all pending output to appear on the screen immediately.
    Slower if used too often because flushing takes extra time.
    Useful when:
    You want immediate output (e.g., before taking input).
    Writing to a file and want to make sure the text is saved right away.*/
    

    return 0;
}
