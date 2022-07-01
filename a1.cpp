/*#include<iostream>
using namespace std;
int main()    // decimal to binary
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
} */
#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
    }
}
{
    int a[10],i;
}

/*#include<iostream>
using namespace std;
int main()

{
    int sci,guj,eng,total;
    float per;
    cout<<"enter sci :";
    cin>>sci;
    cout<<"enter guj :";
    cin>>guj;
    cout<<"enter eng :";
    cin>>eng;

    cout<<"\nsci : "<<sci;
    cout<<"\nguj : "<<guj;
    cout<<"\neng : "<<eng;

    total=sci+guj+eng;
    cout<<"\ntotal : "<<total;

    per=total/3;
    cout<<"\nper : "<<per;
}*/
/* 
#include<iostream>
using namespace std;
class stud
{
    int a,m1,m2,m3,total,per,gread;
    public:
    stud()
    {
        cout<<"\n\n mark :";
        cin>>m1>>m2>>m3;

        total=m1+m2+m3;
        per=total/3;
        cout<<"\n total :"<<total;
        cout<<"\n per :"<<per;
    }
    stud(int n)
    {
        a=n;
        cout<<"\n\n mark :";
        cin>>m1>>m2>>m3;

        total=m1+m2+m3;
        per=total/3;
        cout<<"\n total :"<<total;
        cout<<"\n per :"<<per;
    }
};
int main()
{
    stud s1;
}
*/