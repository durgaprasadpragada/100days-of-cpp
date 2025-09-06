// Function Template with Multiple Types

#include <iostream>
using namespace std;

template <typename T1, typename T2>
void displaySum(T1 a, T2 b)
{
    cout << "Sum: " << (a + b) << endl;
}

int main()
{
    displaySum(5, 10);   // int + int
    displaySum(2.5, 4);  // double + int
    displaySum(3, 7.8f); // int + float
    return 0;
}