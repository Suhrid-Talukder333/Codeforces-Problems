#include<iostream>
using namespace std;

int main()
{
    int n,a,h,ans=0;
    cin>>n>>h;
    for(int i=1; i<=n; ++i)
    {
        cin>>a;
        if(a>h)
        {
            ans=ans+2;
        }
        else
            ans++;

    }
    cout<<ans;
}
