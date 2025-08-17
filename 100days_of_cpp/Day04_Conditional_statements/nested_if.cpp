#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (num > 0)
    {
        if (num % 2 == 0)
        {
            cout << "Positive Even\n";
        }
        else
        {
            cout << "Positive Odd\n";
        }
    }
    else
    {
        cout << "Not a positive number\n";
    }
}
