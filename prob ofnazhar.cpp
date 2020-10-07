#include<iostream>
using namespace std;

int main()
{
    long long int l,r,a=1;
    cin>>l>>r;
    for(int j=1; j<=r; ++j)
        {
            if(a>1)
            {
               a=a*2;
            if(j%2==0)
            {
                for(int i=1; i<=a; ++i)
                {
                    if(l>=r)
                    {
                        cout<<l%100007;
                        return 0;
                    }
                    l=l+2;
                }
            }
            if(j%2!=0)
            {
                for(int i=1; i<=a; ++i)
                {
                    if(l>=r)
                    {
                        cout<<l%100007;
                        return 0;
                    }
                    l=l+2;
                }
            }
            }
        }
}
