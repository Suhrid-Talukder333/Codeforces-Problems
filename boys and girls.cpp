#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int b,g,coount=0;
    cin>>b>>g;
    int x;
    if(b>g)
    {
        x=b-g;
        for(int i=1;i<=g; i++)
        {
            cout<<'B'<<'G';
            coount+=2;
        }
        for(int i=1; i<=x; i++)
        {
            cout<<'B';
            coount++;
        }
    }
    else if(b<g)
    {
        x=g-b;
        for(int i=1;i<=b; i++)
        {
            cout<<'G'<<'B';
            coount+=2;
        }
        for(int i=1; i<=x; i++)
        {
            cout<<'G';
            coount++;
        }
    }
    else if(b==g)
    {
        for(int i=1;i<=b; i++)
        {
            cout<<'G'<<'B';
            coount+=2;
        }
    }

}

