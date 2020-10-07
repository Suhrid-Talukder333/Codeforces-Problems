#include<iostream>
#include<string>
using namespace std;

void change(string arr)
{
    for(int i=0; i<(int)arr.size(); ++i)
    {
        if(arr[i]<'a')
        {
            arr[i]=arr[i]+'a'-'A';
        }
        else
        {
            arr[i]=arr[i]+'A'-'a';
        }
    }
    for(int i=0; i<(int)arr.size(); i++)
    {
        cout<<arr[i];
    }

}

int main()
{
    int up=0;
    string arr;
    cin>>arr;
    for(int i=0; i<(int)arr.size(); ++i)
    {
        if(arr[i]<'a')
        {
            up++;
        }

    }
    if(up==(int)arr.size())
    {

        change(arr);
        return 0;
    }
    else if(arr[0]>='a'&&up==(int)arr.size()-1)
    {

        change(arr);
        return 0;
    }

       cout<<arr;
}
