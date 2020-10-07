#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num,a[101],ans=0;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        cin>>a[i];
    }
    sort(a,a+num);
    for(int i=0; i<num; i++)
    {
        ans=ans+(a[num-1]-a[i]);
    }
    cout<<ans;
}

