#include<iostream>
using namespace std;

int main()
{
    long long int num,f=0,z=0,a;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        cin>>a;
        if(a==5)
        {
            f++;
        }
        if(a==0)
        {
            z++;
        }
    }
    if(f>=9&&z>0)
    {
        while(f%9!=0)
        {
            f--;
        }
        for(int i=1;i<=f;i++)
        {
            cout<<5;
        }
        for(int i=1; i<=z; i++)
        {
            cout<<0;
        }
        return 0;
    }
    else if(z>0)
    {
        cout<<0;
        return 0;
    }
    else
        cout<<-1;

}
