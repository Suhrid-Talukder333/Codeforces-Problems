#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x,l;
    string inpt;
    cin>>inpt;
    cin>>x;
    l=inpt.size()-1;
    for(int i=1; i<=x; i++)
    {
        if(inpt[l]!='0')
        {
            inpt[l]=inpt[l]-1;
        }
        else if(inpt[l]=='0')
        {
            inpt[l]='\0';
            l=l-1;
        }
    }
    int ans=stoi(inpt);
    cout<<ans;

}
