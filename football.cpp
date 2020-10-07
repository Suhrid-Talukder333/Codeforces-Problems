#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    int x=0;

    cin>>str;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==str[i+1])
        {
            x++;
            if(x>=6)
            {
                cout<<"YES"<<endl;
                break;
            }
        }

        else
        {
            x=0;
        }
    }
    if(x<6)
    {
        cout<<"NO"<<endl;
    }
}
