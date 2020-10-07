#include<iostream>
#include<vector>
#include<utility>
using namespace std;

long long int  check[10];

int main()
{
   vector< pair <int,pair<int,int>> > v;
    long long int n;
    cin>>n;
    long long int  arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        check[arr[i]]++;
    }
    if(n%3!=0)
    {
        cout<<"-1";
        return 0;
    }
    if((check[1]>0&&check[3]>0&&check[6]>0)||(check[1]>0&&check[2]>0&&check[6]>0)||(check[1]>0&&check[2]>0&&check[4]>0))
    {
        for(int i=1; i<=n/3; i++)
        {
            if(check[3]>0&&check[1]>0&&check[6]>0)
            {
                v.push_back({1,{3,6}});
                check[3]--;
                check[1]--;
                check[6]--;
            }
            else if(check[2]>0&&check[1]>0&&check[6]>0)
            {
                v.push_back({1,{2,6}});
                check[2]--;
                check[1]--;
                check[6]--;
            }
            else if(check[2]>0&&check[1]>0&&check[4]>0)
            {
                v.push_back({1,{2,4}});
                check[2]--;
                check[1]--;
                check[4]--;
            }
        }
    }
    if(v.size()==n/3)
    {
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
        }
    }
    else
        cout<<-1;
}
