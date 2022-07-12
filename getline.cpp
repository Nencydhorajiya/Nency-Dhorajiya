/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"please enter the name :\n";
//    cin>>str;
//    cout<<"\n str:"<<str;

    getline(cin, str);

    cout<<"hello,"<<str
        <<" welcome to skill qode!\n"; 
    return 0;
}

*/

#include<iostream>          //emplicit conversion
using namespace std;
int main()
{
    int x=10;
    char y='a';

    y=x+y;
    x=x+y;
    //y=x+y;

    float z=x+1.9;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    return 0;
}