#include<iostream>
using namespace std;

int main()
{
    long long int n,a=1,ans=0;
    cin>>n;
    long long int numbers[n];
    for(int i=1; i<=n; ++i)
    {
        cin>>numbers[i];
        if(i>=2&&numbers[i]>=numbers[i-1])
        {
            a++;
        }
        else if(i>=2&&numbers[i]<numbers[i-1])
        {
            if(a>ans)
            {
                ans=a;
            }
            a=1;
        }

    }
    if(a>ans)
    {
        cout<<a;
    }
    else
        cout<<ans;
}
