#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	if(k==0)
	{
		for(int i=1; i<=n; i++)
		{
			cout<<i<<" ";
		}
	}
	else
	{
		for(int i=0; i<k; i++)
		{
			cout<<n-i<<" ";
		}
		for(int i=1; i<=n-k; i++)
		{
			cout<<i<<" ";
		}
	}
}
