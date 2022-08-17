//switch
#include<iostream>
using namespace std;
class bank
{
    int n;
    public:
    bank(int);
    void deposite(int);
    void withdraw(int);
    int totalbalance();
};
bank::bank(int balance)
{
    n=balance;
}
void bank::deposite(int deposite)
{
    n+=deposite;
}
void bank::withdraw(int withdraw)
{
    n-=withdraw;
}
int bank::totalbalance()
{
    int deposite,withdraw,n;
    n=deposite-withdraw;
            if(withdraw > deposite)
            {
                cout<<"\n limit over";
            }
            else
            {
                cout<<"\n total balance"<<n;
            }
    return n;
}


int main()
{
    int n,deposite,withdraw;   //n=balance
    do
    {
        cout<<"\n enter :";
        cin>>n;

        switch (n)  
        {
        case 1: /* constant-expression */
            cout<<"\n deposit amt :";  //<<deposite;
            cin>>deposite;
            break;
        case 2:
            cout<<"\n withdraw amt :";  //<<withdraw;
            cin>>withdraw;
            break;
        case 9:
            n=deposite-withdraw;
            if(withdraw > deposite)
            {
                cout<<"\n limit over";
            }
            else
            {
                cout<<"\n total balance : "<<n;
            }
            break;
        case 0:
            cout<<"\n exit";
            break;
        
        default:
            cout<<"\n wrong choice";
            break;
        }
    } while (n!=0);
}
