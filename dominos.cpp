#include<iostream>
#include<cstdio>
#include<utility>
using namespace std;

int check[101];

bool ev(pair<int,int>p[],int n)
{
    int sum1=0,sum2=0;
    for(int i=0; i<n; i++)
    {
        sum1=p[i].first+sum1;
        sum2=p[i].second+sum2;
    }
    if(sum1%2==0&&sum2%2==0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int n,ans=0;
    scanf("%d",&n);
    pair<int,int>p[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&p[i].first,&p[i].second);
        if(p[i].second%2==0&&p[i].first%2!=0||p[i].second%2!=0&&p[i].first%2==0)
        {
            check[i]=1;
        }
    }
    if(!ev(p,n))
    {
        for(int i=0; i<101; i++)
        {
            if(check[i]==1)
            {
                swap(p[i].first,p[i].second);
                ans++;
            }
            if(ev(p,n))
            {
                cout<<ans;
                return 0;
            }
        }
        cout<<-1;
    }
    else
        cout<<ans;

}
