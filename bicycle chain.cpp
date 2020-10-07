#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num,num1,ans=0,high=0;
    cin>>num;
    int a[num];
    for(int i=0; i<num; i++)
    {
        cin>>a[i];
    }
    cin>>num1;
    int b[num1];
    for(int i=0; i<num1; i++)
    {
        cin>>b[i];
    }
    sort(a,a+num);
    sort(b,b+num1);
    for(int i=num-1; i>=0; i--)
    {
        for(int j=0; j<num1; j++)
        {
            if(b[j]%a[i]==0)
            {

                if(b[j]/a[i]>high)
                {
                    high=b[j]/a[i];
                    ans=0;
                    ans++;
                }
                else if(b[j]/a[i]==high)
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
}
