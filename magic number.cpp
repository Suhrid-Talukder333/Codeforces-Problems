#include<iostream>
#include<string>
using namespace std;


int main()
{
    string arr;
    getline(cin,arr);
    for(int i=0; arr[i]!='\0';i++)
    {
        if(arr[i]=='1'&&arr[i+1]=='4'&&arr[i+2]=='4')
        {
            i+=2;
        }
        else if(arr[i]=='1'&&arr[i+1]=='4')
        {
            i++;
        }
        else if(arr[i]=='1')
        {
            continue;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
