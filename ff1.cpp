#include<iostream>
using namespace std;
class bank
{
    int acc_no,balance;
    string name;
    public :
    static int s;
    bank (int acc_no,int balance,string name)
    {
        this->acc_no=acc_no;
        this->balance=balance;
        this->name=name;
        s++;
    } 
    void getData()
    {   
        cout<<"\n"<<name<<" : "<<acc_no<<" = "<<balance;
        //cout<<"\n accounts no : "<<acc_no;
    }
    /*void getData()
    {
        n=a+m;
        cout<<"\n total amt of a & m : "<<n;
    }*/
};
int bank::s;
int main()
{
    bank a(3,15000,"ne"),m(4,30000,"me");
    a.getData();
    m.getData();
   // n.getData();
    cout<<"\n no. of accounts : "<<bank::s;
   // cout<<"\n total amt of a & m : "<<bank::s;
    return 0;
}