#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,a,j=0;
    double high=0;
    cin>>num>>a;
    int arr[num+1];
    for(int i=1; i<=num; i++)
    {
        cin>>arr[i];
        if(high<=ceil((double)arr[i]/a))
        {
            high=ceil((double)arr[i]/a);
            j=i;
        }
    }
    cout<<j;
}
