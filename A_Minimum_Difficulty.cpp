#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mn;
    int mx = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        mx = max(arr[i] - arr[i - 1], mx);
    }
    for (int i = 1; i < n - 1; i++)
    {
        mn = min(arr[i + 1] - arr[i - 1], mn);
        if (mn <= mx)
        {
            cout << mx;
            return 0;
        }
    }
    cout << mn;
}