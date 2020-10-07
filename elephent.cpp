#include<iostream>
using namespace std;

int main()
{
    int x=0,y,ans=0;
    cin>>y;
    for(int i=1; x!=y; i++)
    {
        if(x+5<=y)
        {
            x=x+5;
            ans++;
        }
       else if(x+4<=y)
        {
            x=x+4;
            ans++;
        }
        else if(x+3<=y)
        {
            x=x+3;
            ans++;
        }
        else if(x+2<=y)
        {
            x=x+2;
            ans++;
        }
       else if(x+1<=y)
        {
            x=x+1;
            ans++;
        }
        if(x==y)
        {
           cout<<ans<<endl;
           break;
        }
    }
}
