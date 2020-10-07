#include<iostream>
#include<string>
using namespace std;

int main()
{
	int ans=0;
	string arr;
	cin>>arr;
	long long int l=arr.size();
	while(l>1)
	{
		long long int sum=0;
		for(int i=0; arr[i]!='\0'; i++)
		{
			sum=sum+arr[i]-'0';
		}
		arr=to_string(sum);
		l=arr.size();
		ans++;
	}
	cout<<ans;
}
