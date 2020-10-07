#include<iostream>
using namespace std;

int main()
{
    int num;
    int a[8];
    cin>>num;
    for(int i=1; i<8; i++)
    {
        cin>>a[i];
    }
    while(1)
    {
        num=num-a[1];
        if(num<=0)
        {
            cout<<1;
            return 0;
        }
        num=num-a[2];
        if(num<=0)
        {
            cout<<2;
            return 0;
        }
        num=num-a[3];
        if(num<=0)
        {
            cout<<3;
            return 0;
        }
        num=num-a[4];
        if(num<=0)
        {
            cout<<4;
            return 0;
        }
        num=num-a[5];
        if(num<=0)
        {
            cout<<5;
            return 0;
        }
        num=num-a[6];
        if(num<=0)
        {
            cout<<6;
            return 0;
        }
        num=num-a[7];
        if(num<=0)
        {
            cout<<7;
            return 0;
        }
    }
}
