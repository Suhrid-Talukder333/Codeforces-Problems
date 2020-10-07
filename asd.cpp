#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;
        for(int j=0; j<=b; j++)
        {
            if(a>b)
            {
                if(j%2==0)
                {
                    a=a-j;
                    j=0;
                }

            }
             if(a<b)
                {
                    if(j%2!=0)
                {
                    a=a+j;
                }
                }
            if(a==b)
            {
                cout<<j<<endl;
                break;
            }
        }
    }
}
