#include<iostream>
using namespace std;

int main()
{
    int arr[101];
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
        {
            if(arr[j]==i)
            {
                cout<<j<<" ";
            }
        }
    }
}
