#include<iostream>
using namespace std;
class bank
{
    
    int a;  //a=balance
    public:
    bank(int);
    void deposit(int);
    void withdraw(int);
    int a_b();  //available balance
     
};
bank::bank(int b)  //b=amount
{
    a=b; //balance=amount
}
void bank::deposit(int b)
{
    a+=b;
}
void bank::withdraw(int b)
{
    a-=b;
}
int bank::a_b()  //calc
{
    return a;
} 
int main()
{
    int ss;
    bank ne(1000);
    cout<<"\n balance :"<<ne.a_b();
    ne.deposit(200);
    cout<<"\n balance de.200 :"<<ne.a_b();
    ne.withdraw(300);
    cout<<"\n balance wi.300 :"<<ne.a_b();
    ne.withdraw(300);
    cout<<"\n balance wi.300 :"<<ne.a_b(); 
}    