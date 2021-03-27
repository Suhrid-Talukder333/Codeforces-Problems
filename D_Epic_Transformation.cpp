#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long n, t, i, a[N], ans;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ans = n;
        for (i = 0; i < n / 2; i++)
        {
            if (a[i] != a[i + (n + 1) / 2])
                ans -= 2;
        }
        cout << ans << endl;
    }
}