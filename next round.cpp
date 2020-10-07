#include<iostream>

using namespace std;

int main()
{
    int numPlayers,exactNum,passed=0;
    int scores[50];

    cin>>numPlayers;
    cin>>exactNum;
    for(int i=1; i<=numPlayers; i++)
    {
        cin>>scores[i];
    }
    for(int i=1; i<=numPlayers; i++)
    {
         if(scores[i]>=scores[exactNum]&&scores[i]>0)
        {
            passed++;
        }
    }
    cout<<passed;
}
