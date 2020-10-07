#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int h[num],low,high,ans=0;
    for(int i=1; i<=num; i++)
    {
        cin>>h[i];
    }
    low=h[1];
    high=h[1];
    for(int i=1; i<=num; i++)
    {
        if(h[i]<low)
        {
            low=h[i];
            ans++;
        }
        if(h[i]>high)
        {
            high=h[i];
            ans++;
        }
    }
    cout<<ans;
}
