#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main()
{

    vector<pair<long long int,long long int>>v;
    vector<pair<long long int,long long int>>p;
    long long int num,high=0;
    cin>>num;
   for(int i=1; i<=num; i++)
    {
        long long int x,y;
        cin>>x>>y;
        if(y>high)
        {
            high=y;
        }
        v.push_back(make_pair(x,y));
        p.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    long long int x=v[0].first;
    for(int i=0; i<num; i++)
    {
        if(p[i].first==x&&p[i].second==high)
        {
            cout<<i+1;
            return 0;
        }
    }

    cout<<-1;
}
