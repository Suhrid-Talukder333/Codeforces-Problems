    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define FOR(i,o,n) for (int i = o; i <= n; i++)
    #define mod 1000000007
    #define pb push_back
    #define ff first
    #define ss second
    #define pp pair<ll,ll>
    #define vl vector<ll>
    #define vpp vector<pp>
    #define INF 1000000000
    #define endl '\n'
    const double PI = 3.141592653589793238460;
    typedef std::complex<double> Complex;
    typedef std::valarray<Complex> CArray;
    #define fast ios::sync_with_stdio(0);cin.tie(0)
    
int main()
{
	fast;
	ll r,c,ans=0;
	cin>>r>>c;
	char arr1[r][c];
	for(int i=0; i<r; i++)
	{
		string arr;
		cin>>arr;
		for(int j=0; arr[j]!='\0'; j++)
		{
			arr1[i][j]=arr[j];
		}
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(arr1[i][j]=='W')
			{
				if(arr1[i][j+1]=='P'&&j+1<c)
				{
					ans++;
					arr1[i][j+1]='0';
				}
				else if(arr1[i+1][j]=='P'&&i+1<r)
				{ 
					ans++;
					arr1[i+1][j]='0';
				}
				else if(arr1[i][j-1]=='P'&&j-1>=0)
				{
					ans++;
					arr1[i][j-1]='0';
				}
				else if(arr1[i-1][j]=='P'&&i-1>=0)
				{
					ans++;
					arr1[i-1][j]='0';
				}
			}
		}
	}
	cout<<ans;		
}
