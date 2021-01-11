#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e1, e2;
    cin >> e1 >> e2;
    int ans = 0;
    if (e1 == 1 && e2 == 1)
    {
        cout << ans;
        return 0;
    }
    while (e1 > 0 && e2 > 0)
    {
        ans++;
        if (e1 < e2)
        {
            e1++;
            e2 -= 2;
        }
        else
        {
            e2++;
            e1 -= 2;
        }
    }
    cout << ans;
}