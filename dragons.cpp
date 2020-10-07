#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    int s,n;
    vector<pair<int,int>>p;
    vector<pair<int,int>>::iterator it;
    cin>>s>>n;
    for(int i=1; i<=n; i++)
    {
        int l,k;
        cin>>l>>k;
        p.push_back(make_pair(l,k));
    }
    it=p.begin();
    sort(it,it+n);
    for(it=p.begin(); it!=p.end(); it++)
    {
        if(it->first<s)
        {
            s=s+it->second;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}

