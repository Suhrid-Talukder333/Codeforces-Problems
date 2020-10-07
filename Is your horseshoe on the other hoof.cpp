#include<iostream>
using namespace std;

int main()
{
    long int num[5],ans=0;
    for(int i=1; i<=4; i++)
    {
        cin>>num[i];
    }
    for(int i=1; i<=4; i++)
    {
        for(int j=i+1; j<=4;j++)
        {
            if(num[i]==num[j])
            {
                num[i]=-1;
                ans++;
            }
        }
    }
    cout<<ans;
}
