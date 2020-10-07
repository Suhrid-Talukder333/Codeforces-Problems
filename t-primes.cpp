#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;


long long int check[1000005];

void chec()
{
    for(int i=1; i<=1000005; i++)
    {
        for(int j=i; j<=1000005; j+=i)
        {
            check[j]++;
        }
    }
}

int main()
{
    chec();
    long long int x;
    scanf("%lld",&x);
    long long int arr[x+1];
    for(int i=1; i<=x; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=1; i<=x; i++)
    {
       if(arr[i]>1000005)
       {
           long long int u;
           u=sqrt(arr[i]);
           if(check[u]==2&&u*u==arr[i])
           {
               cout<<"YES"<<endl;
               continue;
           }
           else
            cout<<"NO"<<endl;
       }
       else if(check[arr[i]]==3)
       {
           cout<<"YES"<<endl;
           continue;
       }
        else
            cout<<"NO"<<endl;
            continue;
    }
}
