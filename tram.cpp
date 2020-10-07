#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int testCase,inpt[10000][2],ans[1000];
    cin>>testCase;
    for(int i=1; i<=testCase; i++)
    {
        cin>>inpt[i][1]>>inpt[i][2];
        inpt[i][2]=inpt[i][2]-inpt[i][1];
        if(i>1)
        {
            inpt[i][2]=inpt[i-1][2]+inpt[i][2];
        }
        if(inpt[i-1][2]>inpt[i][2])
        {
            ans[i-1]=inpt[i-1][2];
        }
        else
        {
            ans[i-1]=inpt[i][2];
        }
    }
    sort(ans,ans+testCase);
    cout<<ans[testCase-1]<<endl;

}
