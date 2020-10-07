#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,q;
    scanf("%d",&n);
    long long int arr[n+1],arr2[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2+1,arr2+n+1);
    for (int a=1;a<=n;a++)
		{
		    arr[a]+=arr[a-1];
            arr2[a]+=arr2[a-1];
		}
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1)
        {
           cout<<arr[z]-arr[y-1]<<endl;
        }
        if(x==2)
        {
            cout<<arr2[z]-arr2[y-1]<<endl;
        }
    }

}
