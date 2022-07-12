#include<iostream>
using namespace std;
class bank
{
    int n,a,b;
    public:
    void de()
    {
        cout<<"\n enter deposit  amount : ";
        cin>>a;

        cout<<"\n enter withdraw amount : ";
        cin>>b;
    }
   
    void calc()
    {
        n=a-b;
        if(b>a)
        {
            cout<<"\nlimit over";
        }
        else
        {
            cout<<"\n total available balance : "<<n;
        }
    }
};

int main()
{
    bank b1;                      
    b1.de();
    b1.calc();
}