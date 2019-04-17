#include <iostream>
#include <conio.h>
#define     NO_MONEY_LEFT   balance<=0
using namespace std;
class BankAccount
{
private:
    long id;
    double balance;
public:
    Account(long Newid, double Newbalance)
    {
        id = Newid;
        balance = Newbalance;
    }
    void deposit (double amount)
    {
        balance += amount;
    }
    void withdraw (double amount)
    {
        if (NO_MONEY_LEFT)
        {
            return;
        }
        else
        {
           balance -= amount;
        }

    }


};
int main()
{
    BankAccount list[20];
    return 0;
}
