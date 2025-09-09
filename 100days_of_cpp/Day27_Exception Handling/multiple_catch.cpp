// Multiple catch blocks
#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 3.14; // throwing a double
    }
    catch (int e)
    {
        cout << "Caught double: " << e << endl;
    }
    catch (double e)
    {
        cout << "Cought double: " << e << endl;
    }
    // catch(...) is the default catch-all handler.
    catch (...)
    {
        cout << "Caught unknown exception!!!" << endl;
    }
    return 0;
}