#include<iostream>
using namespace std;

int main()
{
    long long int x,y,n;
    scanf("%lld %lld %lld",&x,&y,&n);
    long long int dp[6];
    dp[0]=x%1000000007;
    dp[1]=y%1000000007;
    dp[2]=(y-x)%1000000007;
    dp[3]=-x%1000000007;
    dp[4]=-y%1000000007;
    dp[5]=(x-y)%1000000007;
    n=(n-1)%6;
    cout<<(dp[n]%1000000007+1000000007)%1000000007;

}
