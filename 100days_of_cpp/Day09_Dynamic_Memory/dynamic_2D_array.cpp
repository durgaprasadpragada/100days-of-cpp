#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    int **mat = new int *[rows]; // array of pointers
    for (int i = 0; i < rows; i++)
    {
        mat[i] == new int[cols]; // each row is an array
    }

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    // Free memory
    for (int i = 0; i < rows; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}