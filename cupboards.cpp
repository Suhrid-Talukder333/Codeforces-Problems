#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int l[num],r[num],o=0,c=0,ans;
    for(int i=1; i<=num; i++)
    {
        cin>>l[i]>>r[i];
    }
    for(int i=1; i<=num; i++)
    {
        if(l[i]==1)
        {
            o++;
        }
        else
        {
            c++;
        }
    }
    ans=min(o,c);
    o=0;
    c=0;
    for(int i=1; i<=num; i++)
    {
        if(r[i]==1)
        {
            o++;
        }
        else
        {
            c++;
        }
    }
    ans=ans+min(o,c);
    cout<<ans;
}
