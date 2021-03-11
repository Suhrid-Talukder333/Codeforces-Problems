#include <bits/stdc++.h>
using namespace std;
long long value;
bool good(long long a, long long arr[], long long n, long long s)
{
    long long result = 0;
    long long arr1[n];
    for (long long i = 0; i < n; i++)
    {
        arr1[i] = (arr[i] + (a * (i + 1)));
    }
    sort(arr1,arr1+n);
    for (long long i = 0; i<a; i++) {
        result += arr1[i];
    }
    if (result <= s)
    {
        value = result;
        return true;
    }
    return false;
}

int main()
{
    long long n, s;
    cin >> n >> s;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long low = 0;
    long long high = n;
    long long ans = 0;
    while (low < high)
    {
        long long mid = (low + high + 1) / 2;
        if (good(mid, arr, n, s))
        {
            ans = max(ans, mid);
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << " ";
    cout << value;
}