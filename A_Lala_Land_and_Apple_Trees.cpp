#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> pos, neg;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < 0)
        {
            neg.push_back(make_pair(x, y));
        }
        else
        {
            pos.push_back(make_pair(x, y));
        }
    }
    int ans = 0;
    sort(neg.begin(), neg.end(), greater<pair<int, int>>());
    sort(pos.begin(), pos.end());
    if (pos.size() < neg.size())
    {
        for (int i = 0; i < (int)pos.size(); i++)
        {
            ans += pos[i].second;
        }
        for (int i = 0; i < (int)pos.size() + 1; i++)
        {
            ans += neg[i].second;
        }
    }
    else
    {
        for (int i = 0; i < (int)neg.size(); i++)
        {
            ans += neg[i].second;
        }
        if (pos.size() == neg.size())
        {
            for (int i = 0; i < (int)neg.size(); i++)
            {
                ans += pos[i].second;
            }
        }
        else
        {
            for (int i = 0; i < (int)neg.size() + 1; i++)
            {
                ans += pos[i].second;
            }
        }
    }
    cout << ans;
}