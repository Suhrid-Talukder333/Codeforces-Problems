#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int ans = INT_MAX;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    ans = min(ans, 2);
                }
                else
                {
                    ans = min(ans, 4);
                }
            }
        }
    }
    cout << ans;
}