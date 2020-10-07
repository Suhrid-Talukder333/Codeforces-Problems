#include<iostream>
#include<string.h>

using namespace std;;

int main()
{
    int x=0;
    char str[100];
    cin>>str;

   for(int i=0; i<strlen(str); i++)
   {
      for(int j=strlen(str); j>i; j--)
      {
          if(str[i]==str[j])
          {
              str[j]='1';
          }
      }
   }
   for(int i=0; i<strlen(str); i++)
   {
       if(str[i]!='1')
       {
           x++;
       }
   }
    if(x%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
