#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int testCase,coins[101],sum1=0,sum2=0,i=0,j=0,ans=0;
    cin>>testCase;
    for(int i=0; i<testCase; i++)
    {
        cin>>coins[i];
    }
    sort(coins,coins+testCase);
    for(i=testCase-1; i>=j; i--)
    {
        sum2=sum2+coins[i];
        ans++;
        for(j=0; j<i; j++)
        {
            sum1=sum1+coins[j];
        }
        if(sum2>sum1)
        {
            break;
        }
        j=0;
        sum1=0;
    }
    cout<<ans<<endl;
}
