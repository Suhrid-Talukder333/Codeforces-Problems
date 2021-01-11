#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
    int w[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> w[i];
    }
    int hs, hu;
    cin >> hs >> hu;
    hs = hs * 100;
    hu = hu * 50;
    int points[] = {500, 1000, 1500, 2000, 2500};
    double ans = 0;
    for (int i = 0; i < 5; i++)
    {
        double a = (1 - ((double)m[i] / 250.0));
        ans += max((0.3 * (double)points[i]), ((a * (double)points[i]) - (50 * (double)w[i])));
    }
    ans = round(ans);
    ans += (hs - hu);
    cout << ans;
}