#include<iostream>
#include<string>
using namespace std;

int check[123];

int main()
{
    int ans=0;
    string arr,arr1;
    getline(cin,arr);
    getline(cin,arr1);
    for(int i=0; arr[i]!='\0'; i++)
    {
        check[arr[i]]++;
    }
    for(int i=0; arr1[i]!='\0'; i++)
    {
        check[arr1[i]]--;
    }
    for(int i=97; i<=122; i++)
    {
        if(check[i]!=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0; arr1[i]!='\0'&&arr[i]!='\0'; i++)
    {
       if(arr[i]!=arr1[i])
       {
           ans++;
       }
    }
    if(ans>2)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}
