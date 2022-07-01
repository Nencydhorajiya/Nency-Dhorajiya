#include<iostream>
using namespace std;
int main()  // decimal to binary
{
    int n,a,i,j,k;

    cout<<"enter decimal a:";
    cin>>a;
    n=a;

    for(i=1;n!=0;i++)
    n=n/2;
    {
        //i=i-2;
        for(j=i-2;j>=0;j--)
        {
            k=a>>j;
            if(k&1)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
    }
    cout<<"binary";
} 