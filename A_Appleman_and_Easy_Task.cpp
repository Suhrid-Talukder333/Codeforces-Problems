#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ans = 0;
            if (j - 1 >= 0)
            {
                if (arr[i][j - 1] == 'o')
                {
                    ans++;
                }
            }
            if(j + 1 < n) {
                if (arr[i][j + 1] == 'o')
                {
                    ans++;
                }
            }
            if (i - 1 >= 0)
            {
                if (arr[i - 1][j] == 'o')
                {
                    ans++;
                }
            }
            if(i+1<n) {
                if (arr[i + 1][j] == 'o')
                {
                    ans++;
                }
            }
            if (ans % 2 != 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}