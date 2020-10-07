#include"iostream"
using namespace std;

int main()
{
    int line,x=0;
    char a[150][3];
    cin>>line;
    for(int i=1; i<=line; i++)
    {
        cin>>a[i];
        for(int j=0; j<3; j++)
        {
            if(a[i][j]=='-')
            {
                x--;
                break;
            }
            else if(a[i][j]=='+')
            {
                x++;
                break;
            }
        }
    }
    cout<<x;
}
