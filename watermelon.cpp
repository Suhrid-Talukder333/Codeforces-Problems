#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
   double recLength;
   double recWidth;
   double square;
   double lengtReqflag,widthReqflag,numStones;

   cin>>recLength;
   cin>>recWidth;
   cin>>square;

   lengtReqflag=ceil(recLength/square);
   widthReqflag=ceil(recWidth/square);
   numStones=lengtReqflag*widthReqflag;
   cout<<fixed<<setprecision(0)<<numStones<<endl;


}
