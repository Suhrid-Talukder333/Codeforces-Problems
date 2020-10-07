#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int h[6]={0,1,2,3,4,5},arr[6][6],mx=0,sum=0;
   for(int i=1; i<=5; i++)
   {
       for(int j=1; j<=5; j++)
       {
           cin>>arr[i][j];
       }
   }
   mx=0;
   do{
    sum=arr[h[1]][h[2]]+arr[h[2]][h[1]]+arr[h[3]][h[4]]+arr[h[4]][h[3]];
    sum=sum+arr[h[2]][h[3]]+arr[h[3]][h[2]]+arr[h[5]][h[4]]+arr[h[4]][h[5]];
    sum=sum+arr[h[3]][h[4]]+arr[h[4]][h[3]]+arr[h[5]][h[4]]+arr[h[4]][h[5]];
    if(sum>mx)
    {
        mx=sum;
    }
   }while(next_permutation(h+1,h+6));
   cout<<mx;
}
