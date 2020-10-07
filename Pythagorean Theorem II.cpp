#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int num,ans=0;
    scanf("%lld",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=i+1; j<=num; j++)
            {
                long long int c=i*i+j*j;
                if(c>num*num)
                {
                    break;
                }
                double l=sqrt(c);
                if(abs(l-(int)l)==0)
                {
                    ans++;
                }
            }
    }
    cout<<ans;
}
