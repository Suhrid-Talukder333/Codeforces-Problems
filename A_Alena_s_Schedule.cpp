#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ans++;
            if (zero == 1)
            {
                ans++;
                zero = 0;
            }
            else if (zero > 1)
            {
                zero = 0;
            }
        }
        else if (ans > 0 && arr[i] == 0)
        {
            zero++;
        }
    }
    cout << ans;
}