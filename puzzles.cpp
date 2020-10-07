#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int a,b,ans=0,ans1=10000;
    cin>>a>>b;
    int m[b];
    for(int i=0; i<b; i++)
    {
        cin>>m[i];
    }
    sort(m,m+b);
    for(int i=0; i+a<=b; i++)
        {
          for(int j=i,x=1; x<a; x++,j++)
          {
              ans=ans+abs(m[j+1]-m[j]);
          }
          if(ans<ans1)
          {
              ans1=ans;
          }
          ans=0;
        }
        cout<<ans1;
}
