#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        if(i%2!=0)
        {
            if(i>1)
            {
                cout<<" that ";
            }
            cout<<"I hate";
        }
        else if(i%2==0)
        {
            cout<<" that I love";
        }
    }
    cout<<" it";
}
