#include<iostream>
using namespace std;

int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int g=abs(x)+abs(y);
    if(x>0&&y>0)
    {
        cout<<0<<" "<<g<<" "<<g<<" "<<0;
    }
    else if(x<0&&y>0)
    {
        cout<<-g<<" "<<0<<" "<<0<<" "<<g;
    }
     else if(x<0&&y<0)
    {
        cout<<-g<<" "<<0<<" "<<0<<" "<<-g;
    }
    else if(x>0&&y<0)
    {
        cout<<0<<" "<<-g<<" "<<g<<" "<<0;
    }
}
