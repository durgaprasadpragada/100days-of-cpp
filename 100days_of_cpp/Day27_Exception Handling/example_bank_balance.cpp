#include <iostream>
#include <exception>
using namespace std;

class InsufficientBalance : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Error: Insufficient balance for withdrawl!";
    }
};
void withdraw(double balance, double amount)
{
    if (amount > balance)
    {
        throw InsufficientBalance();
    }
    cout << "Withdrawl successfull Remaining balance: " << balance - amount << endl;
}
int main()
{
    try
    {
        {
            withdraw(1000, 500);  // OK
            withdraw(1000, 1500); // throws exception
        }
    }
    catch (const exception &e)
    {
        cout << "Caught Exception: " << e.what() << endl;
    }
    return 0;
}
/*
Output:
Withdrawal successful! Remaining balance: 500
Caught Exception: Error: Insufficient balance for withdrawal!
*/
