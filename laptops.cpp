#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	int check=0;
	vector < pair < int ,int > > v;
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	for(int i=0; i+1<n; i++)
	{
		if(v[i+1].first>v[i].first&&v[i].second>v[i+1].second)
		{
			check=1;
		}
	}
	if(check==1)
	{
		cout<<"Happy Alex";
	}
	else
	{
		cout<<"Poor Alex";
	}

}
