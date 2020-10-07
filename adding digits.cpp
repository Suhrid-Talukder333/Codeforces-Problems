#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    for(int i=0; i<=9; i++)
    {
        if(((a*10)+i)%b==0)
        {
            cout<<a*10+i;
            c=c-1;
            while(c--)
                {
                    cout<<0;
                }
                return 0;
        }
    }
    cout<<-1<<endl;

}
