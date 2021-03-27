#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '*')
            {
                arr[i] = 'x';
                ans++;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'x')
            {
                for (int j = i + k; j > i; j--)
                {
                    if (j < n)
                    {
                        if (arr[j] == '*')
                        {
                            arr[j] = 'x';
                            ans += 1;
                            i = (j - 1);
                            break;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}