#include<iostream>
using namespace std;


int main()
{
    int a,b,check=0;
    cin>>a>>b;
    char m[a][b];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>m[i][j];
        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(m[i][j]=='.')
            {
                if((j+i)%2==0)
            {
                m[i][j]='W';
            }
            else
                m[i][j]='B';
            }

        }
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<m[i][j];
        }
        cout<<endl;
    }
}
