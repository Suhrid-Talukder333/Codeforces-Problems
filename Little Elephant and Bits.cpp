#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string arr;
    vector<char>v;
    vector<char>::iterator it;
    int check=0;
    cin>>arr;
    for(int i=0,j=0; arr[i]!='\0'; i++)
    {
        if(check==0&&arr[i]=='0')
        {
            check=1;
            continue;
        }
        v.push_back(arr[i]);
    }
    if(check==0)
    {
        v.pop_back();
    }
    for(it=v.begin();it!=v.end(); it++)
    {
        cout<<*it;
    }
}
