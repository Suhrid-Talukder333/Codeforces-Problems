#include<iostream>
#include<cstdio>
#include<utility>
#include<queue>
using namespace std;

int main()
{
    long long int n,sum=0,d,m,ans=0,i,j;
    scanf("%lld %lld",&n,&m);
    long long int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=1; i<=m; i++)
    {
        sum=sum+arr[i];
    }
    d=sum;
    ans=1;
    for(i=m+1; i<=n; i++)
    {
        sum=sum+arr[i]-arr[i-m];
        if(sum<d)
        {
            d=sum;
            ans=i-m+1;
        }

    }
    cout<<ans;
}
