#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int num,ans=0;
    char str[60];
    cin>>num;
    for(int i=1; i<=num; i++)
    {
         cin>>str[i];
    }
    for(int i=1; i<=num; i++)
    {

          if(str[i]==str[i+1])
        {
            ans++;
        }

    }
    cout<<ans;
}

