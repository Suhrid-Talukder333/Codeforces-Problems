#include<iostream>
using namespace std;
typedef long long int ll;

ll power(ll n,ll p)
{
	ll sum=1;
	while(p)
	{
		if(p%2)
		{	
			sum=((sum)%10*(n%10))%10;
			p--;
		}
		else
		{
			n=((n)%10*(n)%10)%10;
			p=p/2;
		}
	}
	return sum;
}


int main()
{
	ll p;
	cin>>p;
	cout<<power(8,p)%10<<endl;
}
