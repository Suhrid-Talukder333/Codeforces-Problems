#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(make_pair(x, i));
        }
        sort(v.begin(), v.end());
        if (v[0].first == v[1].first)
        {
            cout << v[n - 1].second + 1 << endl;
        }
        else
        {
            cout << v[0].second + 1 << endl;
        }
    }
}