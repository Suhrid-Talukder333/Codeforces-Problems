#include<iostream>
using namespace std;

int main()
{
    int check=0,check1=0;
    char arr[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }
    //##
    //##
    for(int i=0; i<2; i++)
    {
        for(int j=1; j<3; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }
    //###
    //###
    for(int i=0; i<2; i++)
    {
        for(int j=2; j<4; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }



    //####
    //####
    //####
    for(int i=1; i<3; i++)
    {
        for(int j=0; j<2; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }
    //##
    //##
    for(int i=1; i<3; i++)
    {
        for(int j=1; j<3; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }
    //###
    //###
    for(int i=1; i<3; i++)
    {
        for(int j=2; j<4; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }


        //####
    //####
    //####
    for(int i=2; i<4; i++)
    {
        for(int j=0; j<2; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }
    //##
    //##
    for(int i=2; i<4; i++)
    {
        for(int j=1; j<3; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }
    //###
    //###
    for(int i=2; i<4; i++)
    {
        for(int j=2; j<4; j++ )
        {
            if(arr[i][j]=='#')
            {
                check++;
            }
            else
            {
                check1++;
            }
        }

    }
        if(check1>=3||check>=3)
        {
            cout<<"YES";
            return 0;
        }
        else{
            check1=0;check=0;
        }
    cout<<"NO";
}
