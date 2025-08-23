/*
public → accessible anywhere.
private → accessible only inside class.
protected → used in inheritance.
*/
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance; // cannot access directly

public:
    // set balance
    void setBalance(int b)
    {
        balance = b;
    }
    // get balance
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount acc;

    acc.setBalance(5000); // setting balance using setter
    cout << "Current Balance: " << acc.getBalance() << "\n";

    acc.setBalance(10000); // update balance again
    cout << "Update Balance: " << acc.getBalance() << "\n";

    return 0;
}
/*
Explanation:
balance is private → you can’t do acc.balance = 5000; directly.
Instead, you use setter (setBalance) to change it.
And getter (getBalance) to read it.
👉This is called Encapsulation → wrapping data + methods together and controlling access.
*/