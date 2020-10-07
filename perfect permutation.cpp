#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    if(n%2!=0)
    {
        cout<<-1;
        return 0;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            arr[i]=i;
        }
        for(int i=1,j=i+1; j<=n; j+=2,i+=2)
        {
            swap(arr[i],arr[j]);
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
