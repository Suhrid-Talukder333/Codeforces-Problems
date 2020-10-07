#include<iostream>
#include<algorithm>
using namespace std;

int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    if(x==2)
    {
        return 2;
    }
    else
    {
        return fact(x-1)*x;
    }
}

int main()
{
    long long int a,ans,x=0,y=0,ans1;
    cin>>a;
    long long int b[a];
    for(int i=0 ; i<a; i++)
    {
        cin>>b[i];
    }
    sort(b,b+a);
    ans=b[a-1]-b[0];
    for(int i=0; i<a; i++)
    {
        if(b[i]==b[0])
        {
            x++;
        }
    }
    for(int i=0; i<a; i++)
    {
        if(b[i]==b[a-1])
        {
            y++;
        }
    }
    if(b[0]==b[a-1])
    {
        ans1=x*(x-1)/2;
    }
    else
    {
        ans1=x*y;
    }
    cout<<ans<<" "<<ans1;
}
