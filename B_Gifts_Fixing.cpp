#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans1 = LONG_LONG_MAX;
        long long ans2 = LONG_LONG_MAX;
        long long candy[n], orange[n];
        long long k = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> candy[i];
            ans1 = min(candy[i], ans1);
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> orange[i];
            ans2 = min(orange[i], ans2);
        }
        
        for (long long i = 0; i < n; i++)
        {
            if (candy[i] > ans1 && orange[i] > ans2)
            {
                long long a = min((candy[i] - ans1), (orange[i] - ans2));
                candy[i] -= a;
       
                orange[i] -= a;
                k += a;
            }
            if (candy[i] > ans1)
            {
                long long a = candy[i] - ans1;
                candy[i] -= a;
                k += a;
               
            }
            if (orange[i] > ans2)
            {
                long long a = orange[i] - ans2;
                orange[i] -= a;
             
                k += a;
            }
        }
        cout << k << endl;
    }
}