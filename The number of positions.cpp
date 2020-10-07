#include<iostream>
using namespace std;

int main()
{
    int num,a,b,ans=0;
    cin>>num>>a>>b;
    for(int i=1; i<=num; i++)
    {
        int x=num-1-(num-i);
        int y=num-x-1;
        if(x>=a&&y<=b)
        {
            ans++;
        }
    }
    cout<<ans;
}
