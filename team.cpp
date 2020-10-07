#include<iostream>
using namespace std;

int main()
{
    int num,x[3],sum=0;
    cin>>num;
    for(int i = 1; i<=num; i++)
    {
        cin>>x[0];cin>>x[1];cin>>x[2];
        if(x[0]+x[1]+x[2]>=2)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
