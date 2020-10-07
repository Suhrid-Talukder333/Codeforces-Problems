#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,x; long long int b;
    cin>>a>>b;
    x=a+b;
    for(int i=1; i<=x; i++)
    {
        if(i%2!=0)
        {
            a=a-i;
            if(a<0)
            {cout<<"Vladik"<<endl;
            return 0;
            }
        }

        else if(i%2==0)
        {
                b=b-i;
                if(b<0)
                {cout<<"Valera"<<endl;
                return 0;
                }
            }
        }
    }
