#include<iostream>
using namespace std;

int main()
{
    int n,a=0,d=0;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=0; i<n; ++i)
    {
        if(arr[i]=='A')
        {
            a++;
        }
        else
            d++;
    }
    if(a==d)
    {
        cout<<"Friendship"<<endl;
    }
    else if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else
        cout<<"Danik"<<endl;
}
