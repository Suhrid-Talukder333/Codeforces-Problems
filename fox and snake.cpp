#include<iostream>
using namespace std;

int main()
{
    int n,m,a=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            a++;
        }
        for(int j=1; j<=m; j++)
        {
            if(i%2!=0)
            {
                cout<<'#';
            }
            else if(i%2==0)
            {
                if(a%2==0&&j==1)
                {
                    cout<<'#';
                }
                else if(a%2!=0&&j==m)
                {
                    cout<<'#';
                }
                else
                {
                    cout<<'.';
                }
            }
            if(j==m)
                {
                    cout<<endl;
                }
        }
    }
}
