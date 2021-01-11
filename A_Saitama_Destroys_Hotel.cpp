#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = k;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin>>a>>b;
        ans = max(ans, a + b);
    }
    cout << ans;
}