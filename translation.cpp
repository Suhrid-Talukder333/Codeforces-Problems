#include<iostream>
#include<string.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string inpt1,inpt2,inpt3;
    cin>>inpt1>>inpt2;
    reverse(inpt1.begin(),inpt1.end());
    if(inpt1==inpt2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
