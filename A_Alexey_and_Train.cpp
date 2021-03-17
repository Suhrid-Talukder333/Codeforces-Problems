#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> t;
        for (long long i = 0; i < n; i++)
        {
            long long a, b;
            cin >> a >> b;
            t.push_back(make_pair(a, b));
        }
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1) {
            cout << t[0].first + arr[0] << endl;
            continue;
        }
        long long ans = arr[0] + t[0].first;
        long long d = (long long)ceil((((double)t[0].second - (double)t[0].first + 0.0000) / 2));
        if (ans + d <= t[0].second)
        {
            ans = t[0].second;
        }
        else
        {
            ans += d;
        }
        for (long long i = 1; i < n - 1; i++)
        {
            long long x = t[i].first - t[i - 1].second + arr[i];
            ans += x;
            d = (long long)ceil((((double)t[i].second - (double)t[i].first + 0.0000) / 2));
            ans += d;
            if (ans <= t[i].second)
            {
                ans = t[i].second;
            }
        } 
        long long x = t[n - 1].first - t[n - 2].second + arr[n - 1];
        ans += x;
        cout << ans << endl;
    }
}