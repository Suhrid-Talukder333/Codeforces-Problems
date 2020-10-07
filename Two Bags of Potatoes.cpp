#include<iostream>
using namespace std;

int main()
{

    int y,k,n,check=0;
    cin>>y>>k>>n;
    int x = k - y % k;
    int top = n - y;
    if (x <= top)
    {
        cout<<x<<" ";
        x += k;
        while (x <= top)
        {
            cout<<x<<" ";
            x += k;
        }
        printf("\n");
    }
    else
    {
        printf("-1\n");
    }
}

