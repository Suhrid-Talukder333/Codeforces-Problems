#include<iostream>
using namespace std;

int main()
{
    char str[1000];
    cin>>str;
    if(str[0]>90)
    {
        str[0]=str[0]-'a'+'A';
    }
    cout<<str;
}
