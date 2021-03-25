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
            int def = b - a;
            while(def) {
                if(def>=k) {
                    ans += def / k;
                    def %= k;
                }
                else {
                    k--;
                }
            }
        }
        else
        {
            int def = a - b;
            while (def)
            {
                if (def >= k)
                {
                    ans += def / k;
                    def %= k;
                }
                else {
                    k--;
                }
            }
        }
        cout << ans << endl;
    }
}