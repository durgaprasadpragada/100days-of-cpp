#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // points to first element
    // int *p = NULL; //NULL POINTER

    cout << *ptr << "\n";
    cout << *(ptr + 1) << "\n";
    cout << *(ptr + 2) << "\n";

    return 0;
}