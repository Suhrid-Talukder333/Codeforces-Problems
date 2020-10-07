#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,mx=0,mn=0;
    cin>>n>>m;
    int a[m],b[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=1; i<=n; i++)
    {
        sort(a,a+m);
        mx=mx+a[m-1];
        a[m-1]--;
        sort(b,b+m);
        int j=0;
        while(1)
        {
            if(b[j]>0)
            {
                break;
            }
            else
            {
                j++;
            }
        }
        mn=mn+b[j];
        b[j]--;
    }


    cout<<mx<<" "<<mn;
}
