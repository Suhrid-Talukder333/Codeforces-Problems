#include<iostream>
#include<string>
using namespace std;
int check[123];
int main()
{
    string arr,arr1,arr2;
    cin>>arr>>arr1>>arr2;
    if((int)arr2.size()<max((int)arr.size(),(int)arr1.size()))
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; arr[i]!='\0'; i++)
    {
       check[arr[i]]++;
    }
    for(int i=0; arr1[i]!='\0'; i++)
    {
       check[arr1[i]]++;
    }
    for(int i=0; arr2[i]!='\0'; i++)
    {
       check[arr2[i]]--;
    }
    for(int i=65; i<=90; i++)
    {
        if(check[i]!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
