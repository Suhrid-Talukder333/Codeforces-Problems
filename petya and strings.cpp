#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[100],str2[100],sum=0;
    cin>>str1>>str2;
    for(int i=0; i<strlen(str1); i++)
    {
        if(str1[i]>90)
        {
        str1[i]=str1[i]-'a'+'A';
        }
        if(str2[i]>90)
        {
        str2[i]=str2[i]-'a'+'A';
        }
      if(str1[i]<str2[i])
      {
          cout<<-1;
          sum=1;
          break;
      }
      else if(str1[i]>str2[i])
      {
          cout<<1;
          sum=1;
          break;
      }
      else
      {
          sum=0;
      }
    }
    if(sum==0)
    {
        cout<<0;
    }
}
