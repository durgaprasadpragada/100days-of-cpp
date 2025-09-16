#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // empty vector

    // Insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Access elements
    cout << "First element: " << v[0] << endl;
    cout << "Second Element: " << v.at(1) << endl;

    // Size & Capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}