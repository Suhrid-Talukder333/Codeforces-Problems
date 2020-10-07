#include<iostream>
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==j)
			{
				cout<<d<<" ";
			}
			else
				cout<<0<<" ";
		}
		cout<<endl;
		
	}
}
