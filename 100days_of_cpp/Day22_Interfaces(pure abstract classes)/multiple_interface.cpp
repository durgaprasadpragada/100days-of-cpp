#include <iostream>
using namespace std;

// Interface 1
class IReadable
{
public:
    virtual void read() = 0;
};
// Interface 2
class IWritable
{
public:
    virtual void write() = 0;
};
// Class implementing both interfaces
class File : public IReadable, public IWritable
{
public:
    void read() override
    {
        cout << "Reading from file..." << endl;
    }
    void write() override
    {
        cout << "Writing to file..." << endl;
    }
};
int main()
{
    File f;
    f.read();
    f.write();

    return 0;
}