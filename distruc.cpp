/*
#include<iostream>
using namespace std;
class con{
    int n;
    public:
    con(int n)
    
    {
        this->n=n;
        cout<<"\n constructor called :"<<n;
    }
    ~con()
    {
        
        cout<<"\n constructor called :"<<n;
    }
};
int main()
{
    con c1(1),c2(2),c3(3);
}
*/
#include<iostream>
using namespace std;
class bank
{
//private:
    int n,d=1000,w=100;
public:
    bank(int n)
    {
        this->n=n;
        cout<<"\n deposit  amount : "<<d;
        cout<<"\n withdraw amount : "<<w;

        n=d-w;
        if(w>d)
        {
            cout<<"\nlimit over";
        }
        else
        {
            cout<<"\n total available balance : "<<n;
        }
    }
    ~bank()
    {
        cout<<"\n deposit  amount : "<<d;
        cout<<"\n withdraw  amount : "<<w;

        n=d-w;
        if(w>d)
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
    bank b1(1);//,b2(500),b3(400);
}


