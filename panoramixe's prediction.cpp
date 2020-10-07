#include<iostream>
#include<cmath>
using namespace std;
int seive[9999999];

void seiv()
{
    int n=9999999;
    int sq=sqrt(n);
    for(int i=2; i<=sq; i++)
    {
        if(seive[i]==0)
        {
            for(int j=2*i; j<=n; j=j+i)
            {
                seive[j]=1;
            }
        }
    }
}
int main()
{
    seiv();
    int n,m;
    cin>>n>>m;
    if(seive[m]==0)
    {
        for(int i=n+1; i<m; i++)
    {
        if(seive[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    }
    else if(seive[m]==1)
    {
        cout<<"NO";
    }
}
