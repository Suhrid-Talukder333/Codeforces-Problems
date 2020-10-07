#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char _input[100];
    int wordLength;

    cin>>_input;
    wordLength=strlen(_input);
    for(int i=0; i<wordLength; i++)
    {
        if(_input[i]!='a'&&_input[i]!='A'&&_input[i]!='O'&&_input[i]!='o'&&_input[i]!='E'&&_input[i]!='e'&&_input[i]!='Y'&&_input[i]!='y'&&_input[i]!='u'&&_input[i]!='U'&&_input[i]!='I'&&_input[i]!='i')
        {
            if(_input[i]<='Z')
            {
                _input[i]=_input[i]+32;
            }
              printf(".%c",_input[i]);
        }
    }
}
