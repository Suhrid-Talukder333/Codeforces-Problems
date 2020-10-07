#include<iostream>
using namespace std;

int main()
{
    int k,l,m,n,d,ans=0;;
    cin>>k>>l>>m>>n>>d;
    int num[d];
    for(int i=1; i<=d; i++)
    {
        num[i]=1;
    }
    for(int i=1;i<=d;i++)
    {
        if(i%k==0)
        {
            num[i]=0;
        }
    }
    for(int i=1;i<=d;i++)
    {
        if(i%l==0)
        {
            num[i]=0;
        }
    }
    for(int i=1;i<=d;i++)
    {
        if(i%m==0)
        {
            num[i]=0;
        }
    }
    for(int i=1;i<=d;i++)
    {
        if(i%n==0)
        {
            num[i]=0;
        }
    }
    for(int i=1; i<=d; i++)
    {
        if(num[i]==0)
        {
            ans++;
        }
    }
    cout<<ans;
}
