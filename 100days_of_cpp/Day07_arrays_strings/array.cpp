#include <iostream>
using namespace std;

int main()
{
    // basic general method
    // arr[5]; // declares 5 continuous memory slots for integers
    // arr[5]={11,22,33,44,55} //This directly fills the array with values.

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; // max size
    cout << "Enter " << n << " numbers: \n";
    // Loop to fill the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Loop to display array
    cout << "You entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}