#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int k = 10;
        int ans = 0;

        if (a < b)
        {
            while (a != b)
            {
                if (a + k <= b)
                {
                    a += k;
                    ans++;
                }
                else
                {
                    k--;
                }
            }
        }
        else
        {
            while (a != b)
            {

                if (a - k >= b)
                {
                    a -= k;
                    ans++;
                }
                else
                {
                    k--;
                }
            }
        }
        cout << ans << endl;
    }
}