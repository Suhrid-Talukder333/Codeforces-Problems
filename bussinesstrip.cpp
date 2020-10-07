#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int l,ans=0,check=0;
    cin>>l;
    int m[13];
    for(int i=1; i<=12; i++)
    {
        cin>>m[i];
    }
    if(l==0)
    {
        cout<<0;
        return 0;
    }
    sort(m+1,m+13);
    for(int i=12; i>=1; i--)
    {
        check=check+m[i];
        ans++;
        if(check>=l)
        {
            cout<<ans;
            return 0;
        }
        }
    cout<<-1;
}
