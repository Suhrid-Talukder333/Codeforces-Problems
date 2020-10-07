#include<iostream>
using namespace std;
#define MAX 10000
int main()
{
    long long int a,sum=0;
    int b[MAX];
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        cin>>b[i];
    }
    for(int i=1; i<=b[a]; i++)
    {
        sum=sum+b[i];
    }
    cout<<sum;
    return 0;
}
