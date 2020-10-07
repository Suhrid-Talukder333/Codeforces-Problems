#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    int x=0,y=0;
    char str[100];
    string str1;
    cin>>str;
    str1="hello";
    for(int i=0; i<(int)strlen(str); i++)
    {
        if(str[i]==str1[x])
        {
            x++;
            y++;
        }
    }
    if(y==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
