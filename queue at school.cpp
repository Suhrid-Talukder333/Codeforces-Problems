#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    string inpt;
    int t,num;
    cin>>num>>t>>inpt;
    for(int j=1; j<=t; j++)
    {for(int i=0; i<inpt.size(); i++)
    {
        if(inpt[i]=='B'&&inpt[i+1]=='G')
        {
            inpt[i]='G';
            inpt[i+1]='B';
            i++;
        }
    }
    }
    cout<<inpt;
}
