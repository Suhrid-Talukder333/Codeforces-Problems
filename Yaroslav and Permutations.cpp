#include<iostream>
using namespace std;

int check[1001];
int main()
{
    int num,dis=0,hsam=0;
    cin>>num;
    if(num==1)
    {
        cout<<"YES";
        return 0;
    }
    for(int i=0; i<num; i++)
    {
        int x;
        cin>>x;
        check[x]++;
    }
    for(int i=0; i<1001; i++)
    {
        if(check[i]>hsam)
        {
            hsam=check[i];
        }
        if(check[i]>0)
        {
            dis=dis+check[i];
        }
    }
    int a=dis-hsam;
    if(a>=hsam-1)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
