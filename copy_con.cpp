#include<iostream>
using namespace std;
class bank
{
    int balance;
    public:
    bank(int);
    bank(bank &);
    void deposite(int);
    void withdraw(int);
    int showbalance();
    
};
bank::bank(int amt)
{
    balance = amt;
   // cout<<"\n constructor :"<<balance;
}
bank::bank(bank &obj)
{
    balance = obj.balance;  // consructor copy
    //cout<<"\n copy constructor :"<<balance;
}

void bank::withdraw(int amt)
{
    balance -= amt;
}
void bank::deposite(int amt)
{
    balance += amt;
}
int bank::showbalance()
{
    return balance;
}
int main()
{
    
    int dep,wd,total;
    bank me1(500);
    bank me2(me1);
    bank me3(me2);
    cout<<"\n balance : "<<me1.showbalance();
    cout<<"\n copy balance : "<<me2.showbalance();
    cout<<"\n copy2 balance : "<<me3.showbalance();
}