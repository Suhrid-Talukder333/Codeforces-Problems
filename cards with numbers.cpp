#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;



int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int num,sum=0,cnt=0;
    scanf("%d",&num);
    pair<int,int>*v=new pair<int,int>[2*num];
    for(int i=0; i<2*num; i++)
    {
        scanf("%d",&v[i].first);
        v[i].second=i;

    }
    sort(v,v+(2*num));
    for(int i=0; i<2*num; i+=2)
    {
        if(v[i].first!=v[i+1].first)
        {
            printf("-1");
            return 0;
        }
    }
    for(int i=0; i<2*num; i+=2)
    {
        printf("%d %d \n",v[i].second+1,v[i+1].second+1);

    }
    delete[] v;
}
