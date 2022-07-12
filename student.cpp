#include<iostream>
using namespace std;
class stud
{
    int a,m1,m2,m3,total,per,gread;
    public:
        stud()
        {
            //int m1,m2,m3;

            cout<<"\n\n marks :";
            cin>>m1>>m2>>m3;
            
            total=m1+m2+m3;
            per=total/3;
            cout<<"\n total :"<<total;
            cout<<"\n per. :"<<per;

        }
        stud(int n)
        {
            a=n;
            cout<<"\n\n marks :";
            cin>>m1>>m2>>m3;
            
            total=m1+m2+m3;
            per=total/3;
            cout<<"\n total :"<<total;
            cout<<"\n per. :"<<per;

            //out<<"\n gread :"<<gread;
        }
        
};
int main()
{
    stud s1;
}