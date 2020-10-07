#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char inpt[1000];
    cin>>inpt;
    for(int i=0; i<strlen(inpt); i++)
    {
        if(inpt[i]=='H'||inpt[i]=='Q'||inpt[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
