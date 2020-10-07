#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a=0;
    string inpt;
    cin>>inpt;
    for(int i=0; i<inpt.size(); i++)
    {
        if(inpt[i]=='4'||inpt[i]=='7')
        {
           a++;
        }
    }
    if(a==4||a==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
