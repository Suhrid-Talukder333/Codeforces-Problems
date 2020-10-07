#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    long long int num,ans=0,ans1=0,check=0,boo=0;
    cin>>num;
    long long int arr[num];
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+num);
    for(int i=0; i<num; i++)
    {
        ans=ans+abs(i+1-arr[i]);
    }
    cout<<ans;
}
