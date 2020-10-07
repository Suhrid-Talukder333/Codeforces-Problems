#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        sum=sum+arr[i];
    }
    if(sum%n==0)
    {
        cout<<n;
    }
    else
        cout<<n-1;
}
