#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double n,x,y;
	cin>>n>>x>>y;
	double a=ceil(n*y/100);
	if(x<a)
	{
		cout<<abs(a-x);
	}
	else
		cout<<0;
}
