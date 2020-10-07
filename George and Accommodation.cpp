#include<iostream>
using namespace std;

int main()
{
    int n,a,b,sum=0;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cin>>a>>b;
        if(a+2<=b)
        {
            sum++;
        }
    }
    cout<<sum;
}
