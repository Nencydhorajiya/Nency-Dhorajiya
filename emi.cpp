#include<iostream>
#include<math.h>
using namespace std;
class emi
{
    float emi,p,r,n,T,i;  //p=loan amount, r=interest rate, n=loan period, i=payable interest, // T=total payment
    public:
    void getdata();
    float calcdata();
    float calcdata1();
    float calcdata2();
};

void emi::getdata()
{
    cout<<"\n Loan amount:";    //p=loan amount
    cin>>p;                            
    cout<<"\n Rate of interest:";  //r=interest rate
    cin>>r;
    cout<<"\n Time period in month:";   //n=loan period
    cin>>n;
}
float emi::calcdata()
{
    r=r/(12*100);     //r=interest rate
    //n=n*12;         // if enter month,no need it.
    emi=(p*r*pow(1+r,n)/(pow(1+r,n)-1));   //  p=loan amount, n=loan period, r=interest rate
    return emi;
}
float emi::calcdata1()
{
    
    i=emi*n-p;     // i=payable interest
    return i;
}
float emi::calcdata2()
{
    T=p+i;          // T=total payment
    return T;
}

int main()
{
    emi a1;
    float emi,T,i;
    a1.getdata();
    emi=a1.calcdata();
    cout<<"\n\n Monthly EMI :"<<emi;
    i=a1.calcdata1();
    cout<<"\n\n Payable interest :"<<i;
    T=a1.calcdata2();
    cout<<"\n\n Total payment :"<<T;
    return 0;
}

//Effective Interest Rate (EIR) = Base Rate + Markup