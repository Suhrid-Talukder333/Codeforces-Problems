#include<iostream>
#include<string>
using namespace std;

int main()
{
    int low=0,up=0;
    string arr;
    cin>>arr;
    for(int i=0; i<(int)arr.size(); ++i)
    {
        if(arr[i]<'a')
        {
            up++;
        }
        else
            low++;
    }
    if(up<=low)
    {
        for(int i=0; i<(int)arr.size(); ++i)
        {
            if(arr[i]<'a')
            {
                arr[i]=arr[i]-'A'+'a';
            }
        }
    }
    else
    {
        for(int i=0; i<(int)arr.size(); ++i)
        {
            if(arr[i]>='a')
            {
                arr[i]=arr[i]-'a'+'A';
            }
        }
    }
    for(int i=0; i<(int)arr.size(); ++i)
    {
        cout<<arr[i];
    }
}
