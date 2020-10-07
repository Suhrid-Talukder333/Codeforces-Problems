#include<iostream>
#include<string>
using namespace std;

long long int check[123];

long long int chec()
{
    long long int high=0,j=0;
    for(int i=65; i<=90; i++)
    {
        if(check[i]>0)
        {
            if(check[i]>high)
            {
                high=check[i];
                j=i;
            }
        }

    }
    check[j]=0;
    return high;
}


int main()
{
    long long int n,m,high=0,coins=0;
    string arr;
    cin>>n>>m;
    cin>>arr;
    for(int i=0; arr[i]!='\0'; i++)
    {
        check[arr[i]]++;
    }
    while(m>0)
    {
        high=chec();
        if(high>=m)
        {
            coins=coins+(m*m);
            break;
        }
        else if(high<m)
        {
            coins=coins+(high*high);
            m=m-high;

        }
    }
    cout<<coins;

}
