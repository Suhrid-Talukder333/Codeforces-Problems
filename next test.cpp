#include<iostream>
using namespace std;

int check[1000005];

int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		int x;
		cin>>x;
		check[x]=1;
	}
	for(int i=1; i<=n+1; i++)
	{
		if(check[i]==0)
		{
			cout<<i;
			break;
		}
	}
}
