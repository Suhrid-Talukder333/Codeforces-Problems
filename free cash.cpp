#include<iostream>
using namespace std;

int main()
{
    int n, time, mi, time1, mi1, high=1, cash=1;
    scanf("%d", &n);
    scanf("%d%d", &time, &mi);
    n=n-1;
    while (n--)
    {
        scanf("%d%d", &time1, &mi1);
        if (time == time1 && mi == mi1)
        {
            high += 1;
            if (high > cash)
            {
                cash = high;
            }
        }
        else
        {
            high = 1;
        }
        time = time1;
        mi = mi1;
    }
    printf("%d\n", cash);
    return 0;
}

