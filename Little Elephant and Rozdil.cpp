#include<iostream>
#include<utility>
using namespace std;
int main()
{
    long long int num;
    cin>>num;
    long long int arr[num];
    for(int i=1; i<=num; i++)
    {
        cin>>arr[i];
    }
    pair<int,pair<int , int >>p={1,{1,arr[1]}};
    for(int i=2; i<=num; i++)
    {
        if(arr[i]==p.second.second)
        {
            p.second.first++;
        }
        if(arr[i]<p.second.second)
        {
            p.first=i;
            p.second.first=1;
            p.second.second=arr[i];
        }
    }
    if(p.second.first==1)
    {
        cout<<p.first;
    }
    else
        cout<<"Still Rozdil";
}
