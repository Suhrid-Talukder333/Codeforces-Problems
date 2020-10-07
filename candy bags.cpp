#include<iostream>
using namespace std;


int main()
{
   int n,m;
   cin>>n;
   m=n;
   int i=1,j=n*n;
   while(m--)
	 {  
	   for(int k=1; k<=n/2; k++,i++,j--)
	   {
		  cout<<i<<" "<<j<<" ";
	   }
	   cout<<endl;
	}
	   
}
