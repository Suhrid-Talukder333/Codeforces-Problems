#include<iostream>
using namespace std;

int main()
{
    int num,pos,l;
    cin>>num>>pos;
    int arr[num+1];
    for(int i=1; i<=num; i++)
    {
        cin>>arr[i];
    }
    l=pos;
    for(int i=num; i>=1; i--)
    {
        if(arr[i]!=arr[pos])
        {
            l=i;
            break;
        }
    }
    if(l>pos)
    {
        cout<<-1;
    }
    else if(l==pos)
    {
        cout<<0;
    }
    else
    {
        cout<<l;
    }
}
