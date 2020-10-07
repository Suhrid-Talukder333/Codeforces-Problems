#include<iostream>
#include<string>
using namespace std;

int main()
{
	string ar,ar1,temp;
	long long int a,b;
	cin>>a>>b;
	ar=to_string(a);
	ar1=to_string(b);
	long long sum1=a+b,sum=0;
	string x=to_string(sum1);
	for(int i=0; x[i]!='\0'; i++)
	{
		if(x[i]!='0')
		{
			temp+=x[i];
		}
	}
	sum1=stoi(temp);
	temp.clear();
	for(int i=0; ar[i]!='\0'; i++)
	{
		if(ar[i]!='0')
		{
			temp+=ar[i];
		}
	}
	sum=sum+stoi(temp);
	temp.clear();
	for(int i=0; ar1[i]!='\0'; i++)
	{
		if(ar1[i]!='0')
		{
			temp+=ar1[i];
		}
	}
	sum=sum+stoi(temp);
	if(sum1==sum)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
}
