#include<iostream>
#include<string>
using namespace std;
int check[123];
int main()
{
    int k;
    cin>>k;
    string arr;
    cin>>arr;
    for(int i=0; arr[i]!='\0'; i++)
    {
        check[arr[i]]++;
    }
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(check[arr[i]]%k!=0)
        {
            cout<<-1;
            return 0;
        }
    }
    for(int i=1; i<=k; i++)
    {
        for(int i=0; i<=122; i++)
        {

            if(check[i]>0)
            {
                 int a=check[i]/k;
                for(int j=1; j<=a; j++)
                {
                    cout<<(char)i;
                }
            }
        }
    }
}
