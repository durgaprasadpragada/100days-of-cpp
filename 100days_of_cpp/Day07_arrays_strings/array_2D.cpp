#include <iostream>
using namespace std;

int main()
{
    int arr[2][4] = {{2, 4, 6, 8}, {3, 5, 7, 9}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}