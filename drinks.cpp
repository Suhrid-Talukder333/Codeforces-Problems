#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num;
    cin>>num;
    double dr[num],ans,v=0.000000;
    for(int i=1; i<=num; i++)
    {
        cin>>dr[i];
        dr[i]=dr[i]/100;
    }
    for(int i=1; i<=num; i++)
    {
        v=v+dr[i];
    }
    cout<<fixed<<setprecision(5)<<(v/num)*100;
}


