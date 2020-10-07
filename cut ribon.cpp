#include<iostream>
#include<algorithm>
using namespace std;

int dp[1000005];

int num(int n, int coin[])
{
    dp[0]=0;
    for(int i=1; i<=n; i++)
    {
      int x=INT_MIN,y=INT_MIN,z=INT_MIN;
      if(i>=coin[0])
      {
          x=dp[i-coin[0]];
      }
      if(i>=coin[1])
      {
          y=dp[i-coin[1]];
      }
      if(i>=coin[2])
      {
          z=dp[i-coin[2]];
      }
      dp[i]=1+max(x,max(y,z));
    }
    return dp[n];
}


int main()
{
    int n,coin[3];
    cin>>n>>coin[0]>>coin[1]>>coin[2];
    cout<<num(n,coin);
}
