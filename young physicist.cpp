#include<iostream>
using namespace std;

int main()
{
    int x=0,y=0,z=0,num,forces[100][3];
    cin>>num;

    for(int i=0; i<num; i++)
    {
        cin>>forces[i][1]>>forces[i][2]>>forces[i][3];
        if(i>0)
        {
        forces[i][1]=forces[i][1]+forces[i-1][1];
        forces[i][2]=forces[i][2]+forces[i-1][2];
        forces[i][3]=forces[i][3]+forces[i-1][3];
        }
        x++;
    }
    if(forces[x-1][1]==0&&forces[x-1][2]==0&&forces[x-1][3]==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
