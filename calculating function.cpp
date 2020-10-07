#include<iostream>
using namespace std;

int main()
{
    long long num,sum,sumodd,sumeven,n;
    cin>>num;
    if(num==1)
    {
        cout<<-1;
        return 0;
    }
    if(num%2==0)
    {
        n=num/2;
        sum=-(n)*(n)+(n)*(n+1);
        cout<<sum;
    }
    else if(num%2!=0)
    {
        n=num/2;
        sumodd=(n+1)*(n+1);
        sumeven=(n)*(n+1);
        cout<<sumeven-sumodd;
    }
}
