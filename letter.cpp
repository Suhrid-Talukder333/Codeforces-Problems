#include<iostream>
#include<string>
using namespace std;

int check[123];

int main()
{
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
    for(int i=65; i<=122; i++)
    {
        if(check[i]<0)
        {
            cout<<"NO";
            return 0;
        }

    }
     cout<<"YES";
}
