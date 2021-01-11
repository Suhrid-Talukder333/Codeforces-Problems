#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double d = a * c / b;
    int ans;
    if (d > c)
    {
        ans = ceil(d - c);
    }
    else
    {
        ans = 0;
    }
    cout << ans;
}