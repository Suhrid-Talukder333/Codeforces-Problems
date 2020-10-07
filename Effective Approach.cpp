#include<iostream>
#include<map>
using namespace std;

int main()
{
   map<int,int>g;
   int num,x;
   long long int v=0,p=0;
   cin>>num;
   for(int i=1; i<=num; i++)
   {
       cin>>x;
       g[x]=i;
   }
   int q,y;
   cin>>q;
   for(int i=1; i<=q; i++)
   {
       cin>>y;
       v=v+g[y];
       p=p+(num-g[y]+1);
   }
   cout<<v<<" "<<p;
}
