#include<iostream>
#include<string>

using namespace std;

int main()
{
    int railNum;
    string door1="front";
    string door2="back";
    string door;
    cin>>door;
    cin>>railNum;
    if(door==door1&&railNum==1)
    {
        cout<<"L"<<endl;
    }
    else if(door==door1&&railNum==2)
    {
        cout<<"R"<<endl;
    }
    else if(door==door2&&railNum==1)
    {
        cout<<"R"<<endl;
    }
    else if(door==door2&&railNum==2)
    {
        cout<<"L"<<endl;
    }
    return 0;
}
