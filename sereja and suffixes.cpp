#include<iostream>
#include<set>
#include<cstdio>
using namespace std;

long long int check[1000005];

int main()
{
    long long n,m,ans=0;
    scanf("%lld %lld",&n,&m);
    long long arr[n],arr1[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        if(check[arr[i]]==0)
        {
            ans++;
            check[arr[i]]++;
        }
        arr1[i]=ans;
    }
    while(m--)
    {
        long long int x;
        scanf("%lld",&x);
        x=x-1;
        printf("%lld\n",arr1[x]);
    }
}
