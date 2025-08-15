#include <iostream>
using namespace std;
int main()
{
    string name;
    string full_name;
    int age;
    float height;

    cout << "Enter the name:";
    // cin is used to get input from user
    cin >> name; // takes single word

    cout << "Enter Full Name: ";
    cin.ignore();            // Clear leftover newline before using getline()
    getline(cin, full_name); // takes multiple words seperated by spaces

    cout << "Enter the age: ";
    cin >> age;

    cout << "Enter the height (in feets): ";
    cin >> height;

    cout << "<------your details------>\n";
    cout << "Your name is: " << name << "\n";
    cout << "Your full name is: " << full_name << "\n";
    cout << "Your Height is: " << height << "\n";
    return 0;
}