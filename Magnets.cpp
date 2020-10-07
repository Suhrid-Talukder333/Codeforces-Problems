#include<iostream>
using namespace std;

int main()
{
    string arr;
    char a[0];
    int m,sum=0;
    cin>>m;
    for(int i=1; i<=m; ++i)
    {
        cin>>arr;
        if(i==1)
        {
            a[0]=arr[1];
        }
        if(i>1)
        {
            if(arr[0]==a[0])
            {
                sum++;
                a[0]=arr[1];
            }
        }
    }
    cout<<sum+1;
}
