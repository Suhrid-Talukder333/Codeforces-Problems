#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

int check[1000005];

void fastdiv()
{
    int i,j;
    for( i=1; i<=1000005; i++)
    {
        for( j=i;j<=1000005;j=j+i)
        {
            check[j]++;
        }
    }
}

int main()
{
    fastdiv();
    long long int sum=0;
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    for(int i=1;i<=x; i++)
    {
        for(int j=1;j<=y; j++)
        {
            for(int k=1; k<=z; k++)
            {
                long long int z=i*j*k;
                sum=(sum+check[z])%1073741824;
            }
        }
    }
    cout<<sum%1073741824;
}
