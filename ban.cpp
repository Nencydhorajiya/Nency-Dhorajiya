#include<iostream>
using namespace std;
class bank
{
    int balance;
    public:
    bank(int);
    void deposit(int);
    void withdraw(int);
    int showbalance();
};
bank::bank(int amt)
{
    balance = amt;
}
void bank::deposit(int amt)
{
    balance += amt;
}
void bank::withdraw(int amt)
{
    balance -= amt;
}
int bank::showbalance()
{
    return balance;
}
int main()
{
    int de;
    bank ne(1000);
    cout<<"\n balance :"<<ne.showbalance();
    ne.deposit(200);
    cout<<"\n balance de.200 :"<<ne.showbalance();
    ne.withdraw(300);
    cout<<"\n balance wi.300 :"<<ne.showbalance();
    ne.withdraw(300);
    cout<<"\n balance wi.300 :"<<ne.showbalance();
}