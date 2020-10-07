#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int mx;
    int a,b;
    cin>>a>>b;
    if(b>k)
    {
        mx=a-(b-k);
    }
    else
        mx=a;
    for(int i=1; i<=n-1; i++)
    {
        int d;
        cin>>a>>b;
        if(b>k)
    {
        d=a-(b-k);
        mx=max(mx,d);
    }
    else
        d=a;
        mx=max(mx,d);
    }
    cout<<mx;
}
