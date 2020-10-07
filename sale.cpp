#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num,c,e=0;
    cin>>num>>c;
    int t[num];
    for(int i=0; i<num; i++)
    {
        cin>>t[i];
    }
    sort(t,t+num);
    for(int i=0; i<c; i++)
    {
        if(t[i]<0)
        {
            e=e-(t[i]);
        }
    }
    cout<<e;
}
