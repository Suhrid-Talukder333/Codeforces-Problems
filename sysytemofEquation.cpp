#include<iostream>
using namespace std;

int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    for(int i=0; i<=a; i++)
    {
        for(int j=0; j<=a; j++)
        {
            if(i*i+j==a)
            {
                if(j*j+i==b)
                {
                    ans++;
                }
            }

        }
    }
    cout<<ans;
}
