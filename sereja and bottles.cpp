#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num],arr2[num],open=0;
    for(int i=1; i<=num; i++)
    {
        cin>>arr[i]>>arr2[i];
    }
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr2[i]==arr[j])
            {
                open++;
                arr[j]=0;
                continue;
            }
        }
    }
    cout<<num-open;
}

