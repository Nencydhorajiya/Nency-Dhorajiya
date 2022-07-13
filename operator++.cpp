
#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
    public:
    loc()
    {
        longitude = 0;
        latitude = 0;
    }
    loc(int lg,int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout<<"\n longitude : "<<longitude<<"";
        cout<<" latitude : "<<latitude<<"\n";
    }
    loc operator++();                     //loc operator--();
};
loc loc:: operator++()                    //loc loc:: operator--()
{
    longitude++;                     // longitude--;                                   
    latitude++;                      // latitude--;
    return *this;
}
int main()
{ 
    loc ob1(10,20),ob2(5,30);
    cout<<"\n";
    ob1.show();
    ++ob1;                  //--ob1;       
    ob1.show();

    cout<<"\n";
    ob2.show();
    ++ob2;                 //--ob2;
    ob2.show();

    cout<<"\n";

    return 0;
}


/*
#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
    public:
    loc()
    {
        longitude = 0;
        latitude = 0;
    }
    loc(int lg,int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout<<"\n longitude : "<<longitude<<"";
        cout<<" latitude : "<<latitude<<"\n";
    }
    loc operator++(int);                     //loc operator--(int);
};
loc loc:: operator++(int)                    //loc loc:: operator--(int)
{
    longitude++;                     // longitude--;                                   
    latitude++;                      // latitude--;
    return *this;
}
int main()
{ 
    loc ob1(10,20),ob2(5,30);
    cout<<"\n";
    ob1.show();
    ob1++;                  //ob1--;       
    ob1.show();

    cout<<"\n";
    ob2.show();
    ob2++;                 //ob2--;
    ob2.show();

    cout<<"\n";

    return 0;
}
*/