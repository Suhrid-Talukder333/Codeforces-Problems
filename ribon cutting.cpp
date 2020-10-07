#include<iostream>
using namespace std;


int cut(int n,int a,int b,int c)
{
    if(n<=0)
    {
        return 0;
    }
    int x,y,z;
    x=n-a;
    y=n-b;
    z=n-c;
    if(x>=b||x>=c)
    {
        return cut(n-a,a,b,c)+1;
    }
    else if(y>=c||y>=a)
    {

        return cut(n-b,a,b,c)+1;
    }
    else
    {

        return cut(n-c,a,b,c)+1;
    }
}

int main()
{
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    int x,y,z;
    if(a>=b&&a>=c)
    {
        x=a;
        y=max(b,c);
        z=min(b,c);
        if(n%z==0)
        {
            cout<<n/z;
            return 0;
        }
    }
    else if(b>=a&&b>=c)
    {
        x=b;
        y=max(a,c);
        z=min(a,c);
        if(n%z==0)
        {
            cout<<n/z;
            return 0;
        }
    }
    else if(c>=b&&c>=a)
    {
        x=c;
        y=max(a,b);
        z=min(a,b);
        if(n%z==0)
        {
            cout<<n/z;
            return 0;
        }
    }
    cout<<cut(n,x,y,z);

}
