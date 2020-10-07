#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a],arr1[b];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<b; i++)
    {
        cin>>arr1[i];
    }
    sort(arr,arr+a);
    sort(arr1,arr1+b);
    if(arr[0]*2<=arr[a-1]&&arr[a-1]<arr1[0])
    {
        cout<<arr[a-1];
        return 0;
    }
    if(arr[0]*2>arr[a-1]&&arr[0]*2<arr1[0])
    {
        cout<<arr[0]*2;
        return 0;
    }
    else
        cout<<-1;
}
