#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string a,b;
    vector<int>ans;
    getline(cin,a);
    getline(cin,b);
    for(int i=0; i<=(int)a.size(); i++)
    {
        if(a[i]!=b[i])
        {

            ans.push_back(1);
        }
        else

            ans.push_back(0);
    }
    for(int i=0; i<max((int)a.size(),(int)b.size()); i++)
    {
        cout<<ans[i];
    }
}
