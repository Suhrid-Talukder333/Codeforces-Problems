#include<iostream>
using namespace std;

int main()
{
   long long  int n,m,ans=0;
    cin>>n>>m;
    long long int d[m+1];
    for(int i=1; i<=m; i++)
    {
        cin>>d[i];
    }
    long long int j=1,i=1;
    while(1)
    {
            if(j==m+1)
            {
                cout<<ans;
                return 0;
            }
            if(i<=d[j])
            {
                ans=ans+(d[j]-i);
                i=d[j];
                j++;

            }
            if(i>d[j])
            {
                long long int a=(n-i)+d[j];
                ans=ans+a;
                i=d[j];
                j++;
            }
    }
}
