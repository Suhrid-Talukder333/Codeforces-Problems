#include<iostream>
using namespace std;

int main()
{
    int k,dollar,i,cost=0,loan;
    cin>>k>>dollar>>i;
    for(int j=1; j<=i; j++)
    {
       cost=cost+j*k;
    }
    loan=cost-dollar;
    if(loan<0)
    {
    cout<<"0"<<endl;
    }
    else
    {
    cout<<loan<<endl;
    }
}
