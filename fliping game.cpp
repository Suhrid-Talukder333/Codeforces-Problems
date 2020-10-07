#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,ones=0;
    cin>>n;
    vector < int > v(n);
    vector < int >:: iterator it;
    for(auto &it:v)
    {
        cin>>it;
        if(it==1)
        {
            ones++;
            it=-1;
        }
        else if(it==0)
        {
            it=1;
        }
    }
    if(ones==n)
    {
        cout<<ones-1;
        return 0;
    }
    int current_max=0,max_till=0;
    for(int i=0; i<n; i++)
    {
        current_max=max(v[i],v[i]+current_max);
        max_till=max(max_till,current_max);
    }
    cout<<ones+max_till;
}
