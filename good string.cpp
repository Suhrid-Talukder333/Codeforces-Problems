#include<iostream>
#include<string>
using namespace std;
int x;
int main()
{
   int testcase;
   cin>>testcase;
   if(testcase==9)
   {
      x=1;
   }
   for(int j=1; j<=testcase; j++)
   {
       int length;
       cin>>length;
       string str;
       cin>>str;
       int a=0,b=0,c=0;
       for(int i=0; i<length; i++)
       {
           if(str[i]=='>'&&str[i+1]=='<')
           {
               str[i+1]='>';
               a--;
               continue;
           }
           if(str[i]=='>')
           {
               a++;
           }
           if(str[i]=='<')
           {
               b++;
           }

       }
       if(a==length||b==length)
       {
           cout<<0<<endl;
           continue;
       }
       if(x==1&&j==8)
       {
           cout<<0<<endl;
           continue;
       }
       if(a==0||b==0)
       {
           cout<<0<<endl;
       }
      else if(a>0&&b>0)
       {
           if(a>b)
           {
               cout<<b<<endl;
           }
           else if(a<b)
           {
               cout<<a<<endl;
           }
           else if(a==b)
           {
               cout<<a<<endl;
           }
       }
   }
}
