#include<iostream>
using namespace std;

int main()
{
   int year;
   int number[4];
   cin>>year;
   year=year+1;
   for(year; year<=10000; year++)
   {
    number[3]=year%10;
    number[2]=(year%100-year%10)/10;
    number[1]=(year%1000-year%100)/100;
    number[0]=(year-year%1000)/1000;
    if(number[0]==number[1]||number[0]==number[2]||number[0]==number[3])
    {
        continue;
    }
    if(number[1]==number[2]||number[1]==number[3])
    {
        continue;
    }
    if(number[2]==number[3])
    {
        continue;
    }
    cout<<year<<endl;
    return 0;
   }
}
