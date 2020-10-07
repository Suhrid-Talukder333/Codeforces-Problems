#include<iostream>
using namespace std;

int main()
{
    int number[2],sum[4];
    cin>>number[0]>>number[1]>>number[2];
    sum[0]=number[0]+number[1]+number[2];
    sum[1]=(number[0]+number[1])*number[2];
    sum[2]=number[0]*number[1]*number[2];
    sum[3]=number[0]*(number[1]+number[2]);
    if(sum[0]<sum[1])
    {
        sum[0]=sum[1];
    }
    if(sum[0]<sum[2])
    {
        sum[0]=sum[2];
    }
    if(sum[0]<sum[3])
    {
        sum[0]=sum[3];
    }
    if(sum[0]<sum[4])
    {
        sum[0]=sum[4];
    }
    cout<<sum[0];
}
