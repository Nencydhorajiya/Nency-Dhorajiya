#include<iostream>
using namespace std;
class student
{
    private:
    int s1,s2,s3,total,per,grade;
    public:
        void stu1()
        {
            int m1,m2,m3,name,grade;

            cout<<"\n\n marks :";
            cin>>m1>>m2>>m3;

            total=m1+m2+m3;
            cout<<"\n total :"<<total;

            per=total/3;
            cout<<"\n per :"<<per;

            cout<<"\n grade :";
            if(per>=75)
            {
                cout<<" A ";
            }
            else if(per>=60 && per<=74)
            {
                cout<<" B ";
            }
            else if(per>=45 && per<=59)
            {
                cout<<" C ";
            }
            else if(per>=35 && per<=44)
            {
                cout<<" D ";
            }
            else
            {
                cout<<" Fail ";
            }
            
        }
        void stu2()
        {
            
        }
};
int main()
{
    int i;
    student s1[10];
    for(i=0;i<3;i++)
    {
        s1[i].stu1();
    }
    for(i=0;i<3;i++)
    {
        s1[i].stu2();
    }
}