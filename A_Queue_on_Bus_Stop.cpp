#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + total <= m)
        {
            total += arr[i];
        }
        else
        {
            ans++;
            total = arr[i];
        }
    }
    cout << ++ans;
}