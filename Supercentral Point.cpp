#include<iostream>
#include<map>
#include<utility>
using namespace std;

int main()
{
    map<int,pair<int, int>>mp;
    int num,ans=0;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        int j,k;
        cin>>j>>k;
        mp[i].first=j;
        mp[i].second=k;
    }
    for(int i=1; i<=num; i++)
    {
        int check=0;
        for(int j=1; j<=num; j++)
        {
            if(mp[i].first<mp[j].first&&mp[i].second==mp[j].second)
            {
                check++;
                break;
            }
        }
        for(int j=1; j<=num; j++)
        {
            if(mp[i].first>mp[j].first&&mp[i].second==mp[j].second)
            {
                check++;
                break;
            }
        }
        for(int j=1; j<=num; j++)
        {
            if(mp[i].second>mp[j].second&&mp[i].first==mp[j].first)
            {
                check++;
                break;
            }
        }
        for(int j=1; j<=num; j++)
        {
            if(mp[i].second<mp[j].second&&mp[i].first==mp[j].first)
            {
                check++;
                break;
            }
        }
        if(check>=4)
        {
            ans++;
        }
    }
    cout<<ans;
}
