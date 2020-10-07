#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr;
    int check=0;
    cin>>arr;
    for(int i=0,j=0; arr[i]!='\0'; i++)
    {
        if(arr[i]=='W'&&arr[i+1]=='U'&&arr[i+2]=='B')
        {
            if(check==1)
            {
                cout<<' ';
                check=0;
            }
            i+=2;
        }
        else
        {
           cout<<arr[i];
            check=1;
        }
    }

}
