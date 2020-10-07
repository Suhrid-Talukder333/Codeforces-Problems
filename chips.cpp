#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	/*int i=1;
	while(1)
	{
		if(i==1)
		{
			k=k-1;
			i=n;
			continue;
		}
		if(k<i||k==0)
		{
			break;
		}
		k=k-i;
		i--;
	}
	cout<<k;*/
	k %= (n * (n + 1) / 2);
    for (int i = 1; i <= n; ++i)
    {
        if (k < i)
        {
            break;
        }
        k =k- i;
    }
    cout << k << endl;
    return 0;
}
