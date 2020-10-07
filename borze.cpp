#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]=='-'&&arr[i+1]=='-')
        {
            cout<<2;
            i++;
            continue;
        }
        if(arr[i]=='-'&&arr[i+1]=='.')
        {
            cout<<1;
            i++;
            continue;
        }
         if(arr[i]=='.')
        {
            cout<<0;
            continue;
        }
    }
}
