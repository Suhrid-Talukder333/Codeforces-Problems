#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(make_pair(x, i));
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    vector<int> ans2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first <= k)
        {
            ans++;
            k -= arr[i].first;
            ans2.push_back(arr[i].second);
        }
    }
    cout << ans << endl;
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ++ans2[i] << " ";
    }
}