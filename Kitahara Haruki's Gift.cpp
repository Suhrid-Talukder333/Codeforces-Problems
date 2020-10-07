#include<iostream>
using namespace std;

int main()
{
    int num,one=0,two=0;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        int x;
        cin>>x;
        if(x==100)
        {
            one++;
        }
        else if(x==200)
        {
            two++;
        }
    }
    if(one>1&&two==0&&one%2==0)
    {
        cout<<"YES";
    }
    else if(one==0&&two>1&&two%2==0)
    {
        cout<<"YES";
    }
    else if(one>=1&&two>=1&&one%2==0&&two%2==0)
    {
        cout<<"YES";
    }
    else if(one>=1&&two>=1&&one%2==0&&two%2!=0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
