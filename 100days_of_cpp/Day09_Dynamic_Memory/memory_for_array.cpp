#include <iostream>
using namespace std;

/*
Why use Heap Memory?
If you don’t know array size in advance (user decides it).
Large objects that don’t fit on stack.
Objects that need to outlive the function.
*/

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n]; // allocate array in heap

    cout << "Enter " << n << "number: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // same as *(arr + i)
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    delete[] arr;
    return 0;
}