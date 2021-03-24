#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[5] = {1, 5, 10, 20, 100};
    int ans = 0;
    int i = 4;
    while (n)
    {
        if (n >= a[i])
        {
            n -= a[i];
            ans++;
        }
        else
        {
            i--;
        }
    }
    cout << ans;
}