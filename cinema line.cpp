#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t[101];
    int n;
    t[25]=0,t[50]=0,t[75]=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);
        if(x==25)
        {
            t[25]++;
        }
        else if(x==50)
        {
            if(t[25]>0)
            {
                t[25]--;
                t[50]++;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
        else if(x==100)
        {
            if(t[25]>0&&t[50]>0)
            {
                t[25]--;
                t[50]--;
            }
            else if(t[25]>=3)
            {
                t[25]-=3;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
}
