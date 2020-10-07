#include"iostream"
using namespace std;

int main()
{
    int a,b=0;
    cin>>a;
    for(int i=2; i<=a; i++)
    {
        for(int j=2; j<=a; j++ )
        {
            if(i+j==a)
            {
            if(i%2==0||i%3==0||i%5==0||i%7==0||i%11==0&&j%2==0||j%3==0||j%5==0||j%7==0||j%11==0)
            {
                if(i!=2||i!=3||i!=5||i!=7||i!=11&&j!=2||j!=3||j!=5||j!=7||j!=11)
                {cout<<i<<" "<<j<<endl;
                b=1;
               break;}
               else
                continue;
            }
        }

    }
    if(b==1)
    {
        break;
    }
}
 return 0;

}
