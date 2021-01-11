#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    int maxLimit;
    int minLimit;
    cin >> minLimit >> maxLimit;
    int beginner = 0;
    int advance = total;
    int ans = 0;
    int i;
    if (total / 2 < minLimit)
    {
        cout << 0;
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        if (beginner < minLimit)
        {
            beginner += arr[i];
            ans = max(ans, i + 1);
            advance -= arr[i];
        }
        else
        {
            break;
        }
    }
    if (advance > maxLimit)
    {
        for (; i < n; i++)
        {
            if (advance > maxLimit)
            {
                beginner += arr[i];
                ans = max(ans, i + 1);
                advance -= arr[i];
            }
            else
            {
                break;
            }
        }
    }
    if ((beginner >= minLimit && beginner <= maxLimit) && (advance <= maxLimit && advance >= minLimit))
    {
        cout << ans + 1;
    }
    else
    {
        cout << 0;
    }
}