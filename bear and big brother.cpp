#include<iostream>
using namespace std;

int main()
{
    int lim,bob,x=0,y=0,ans=1;
    cin>>lim>>bob;
    x=3*lim;
    y=2*bob;
    if(x>y)
    {
        cout<<1<<endl;
        return 0;
    }
    for(int i=1; x<=y; i++)
    {
        x=3*x;
        y=2*y;
        ans++;
    }
    cout<<ans<<endl;
}
