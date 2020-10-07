#include<iostream>
using namespace std;
int r[4];
int main()
{
    long long int num,sx,sy,ex,ey;
    cin>>num>>sx>>sy>>ex>>ey;
    char x[num];
    for(int i=0; i<num; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<num; i++)
    {
        if(sx!=ex||sy!=ey)
        {
            if(sy<ey)
            {
                if(x[i]=='S')
                {
                    continue;
                }
                if(x[i]=='N')
                {
                    sy++;
                }
            }
            if(sy>ey)
            {
                if(x[i]=='S')
                {
                    sy--;
                }
                if(x[i]=='N')
                {
                    continue;
                }
            }
             if(sx<ex)
            {
                if(x[i]=='W')
                {
                    continue;
                }
                if(x[i]=='E')
                {
                    sx++;
                }
            }
            if(sx>ex)
            {
                if(x[i]=='W')
                {
                    sx--;
                }
                if(x[i]=='E')
                {
                    continue;
                }
            }
        }
        if(sx==ex&&sy==ey)
        {
            cout<<i+1;
            return 0;
        }
    }

    cout<<-1;
}
