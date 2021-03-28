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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        long long ans = n;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[i + (n + 1) / 2])
                ans -= 2;
        }
        cout << ans << endl;
    }
}