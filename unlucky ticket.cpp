#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n,check=0;
    string s;
    scanf("%d",&n);
    cin>>s;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        arr1[i]=s[i]-'0';
    }
    for(int i=n, j=0; i<2*n; i++,j++)
    {
        arr2[j]=s[i]-'0';
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    for(int i=0; i<n; i++)
    {
        if(arr1[i]==arr2[i])
        {
            cout<<"NO";
            return 0;
        }
        if(check==0&&arr1[i]>arr2[i])
        {
            check=1;
        }
        if(check==0&&arr1[i]<arr2[i])
        {
            check=2;
        }
        if(check==1&&arr1[i]<arr2[i])
        {
            cout<<"NO";
            return 0;
        }
        if(check==2&&arr1[i]>arr2[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
