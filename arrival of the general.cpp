#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num,ans=0;
    cin>>num;
    int arr[num],arr1[num];
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+(num));
    if(arr[num-1]==arr1[0]&&arr[0]==arr1[num-1])
    {
        cout<<0;
        return 0;
    }
    for(int i=0; i<num; i++)
    {
       if(arr[i]==arr1[num-1])
       {
           for(int j=i; (j-1)>=0; j--)
           {
               swap(arr[j],arr[j-1]);
               ans++;
           }
           break;
       }
    }
    for(int i=num-1; i>=0; i--)
    {
       if(arr[i]==arr1[0])
       {
           for(int j=i; (j+1)<num; j++)
           {
               swap(arr[j],arr[j+1]);
               ans++;
           }
           break;
       }
    }
    cout<<ans;
}
