#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,low,k=1,l=2;
    cin>>num;
    int a[num+2];
    for(int i=1; i<=num; i++)
    {
        cin>>a[i];
    }
    a[num+1]=a[1];
    low=abs(a[1]-a[2]);
    for(int i=1; i<=num; i++)
    {
        if(abs(a[i]-a[i+1])<low)
        {
            low=abs(a[i]-a[i+1]);

                k=i;
                l=i+1;
                if(k==num+1)
                {
                    k=1;
                }
                if(l==num+1)
                {
                    l=1;
                }
        }
    }
    cout<<k<<" "<<l;
}
