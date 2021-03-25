#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << (a + a) * (b + a);
        }
        else if (a < b)
        {
            a += a;
            int ans = (max(a,b) * max(a,b));
            
            cout << ans;
        }
        else
        {
            b += b;
            int ans = (max(a,b) * max(a,b));
            cout << ans;
        }
        cout << endl;
    }
}