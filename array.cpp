#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v;
	int n,great=0,low=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]>0)
		{
			great++;
		}
		else if(arr[i]<0)
		{
			low++;
		}
	}
	sort(arr,arr+n);
	if(great==0)
	{
		cout<<1<<" "<<arr[2]<<endl;
	}
	else
	{
		cout<<1<<" "<<arr[0]<<endl;
	}
	if(great==0)
	{
		cout<<2<<" "<<arr[0]<<" "<<arr[1]<<endl;
	}
	else
	{
		cout<<1<<" "<<arr[n-1]<<endl;
	}
	if(great==0)
	{
		for(int i=3; i<n; i++)
		{
			v.push_back(arr[i]);
		}
	}
	else
	{
		for(int i=1; i<=n-2; i++)
		{
			v.push_back(arr[i]);
		}
	}
	cout<<(int)v.size()<<" ";
	for(int i=0; i<(int)v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
}
