#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string names[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long num;
    cin>>num;
    num--;
    while(num>=5)
    {
        num=num-5;
        num=num/2;
    }
    cout<<names[num];


}
