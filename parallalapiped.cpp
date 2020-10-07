#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(sqrt((a*b)/c)+sqrt((a*c)/b)+sqrt((c*b)/a))*4;
}
