#include"iostream"
#include<cstring>

using namespace std;

int main()
{

char _input[100];
int number=0,caseNum,wordLength;

cin>>caseNum;
for(int j=1; j<=caseNum; j++)
{
cin>>_input;
wordLength=strlen(_input);

if(wordLength<=10)
{
    cout<<_input<<endl;
}
else
{
    for(int i=1; i<wordLength-1; i++)
    {
        number++;
    }
    cout<<_input[0]<<number<<_input[wordLength-1]<<endl;
    number=0;
}
}
}


