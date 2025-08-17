#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote.\n";
    }
    else
    {
        cout << "You are not eligible to vote.\n";
    }
    return 0;
}