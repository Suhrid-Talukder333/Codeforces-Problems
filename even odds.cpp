#include<iostream>
using namespace std;

int main()
{
    long long int num ,a;
    cin>>num>>a;
    if(num%2==0)
    {
        if(a<=num/2)
        {
            cout<<(a*2)-1;
        }
        else
            cout<<(a-num/2)*2;
    }
    else
    {
        if(a<=num/2+1)
        {
            cout<<(a*2)-1;
        }
        else
            cout<<(a-num/2-1)*2;
    }
}
