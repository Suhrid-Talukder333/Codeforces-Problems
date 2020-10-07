#include<iostream>
#include<algorithm>
#include<string.h>


using namespace std;

int main()
{
    char inpt[1000],doc[1000];
    int ans[1000],len,a=0,ans1[1000],p=-1;
    cin>>inpt;
    len=strlen(inpt)-1;
    doc[0]='x';
    for(int i=1; i<=len+1; i++)
    {
        doc[i]=inpt[i-1];
    }
    doc[len+2]='y';
    for(int i=0; i<=len+2; i++)
    {
        if(doc[i]=='A'||doc[i]=='E'||doc[i]=='I'||doc[i]=='O'||doc[i]=='U'||doc[i]=='Y'||doc[i]=='y')
        {
            doc[i]='x';
        }
         if(doc[i]=='x')
        {
          ans[a]=i;
          a++;
        }
    }
    for(int i=0; i<a; i++)
    {
        p++;
       ans1[i]=ans[i+1]-ans[i];
    }
   sort(ans1,ans1+p);
   cout<<ans1[p-1]<<endl;
}
