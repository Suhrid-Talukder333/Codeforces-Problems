#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    if (n > 1 && s == 0)
    {
        cout << -1 << ' ' << -1;
        return 0;
    }
    int i = 9;
    vector<int> ans;
    while (n)
    {
        if (i == s && n == 1)
        {
            ans.push_back(i);
            s -= i;
            n--;
        }
        else if (i == s && n != 1)
        {
            i--;
        }
        else if (i < s)
        {
            ans.push_back(i);
            s -= i;
            n--;
        }
        else if (i > s)
        {
            i--;
        }
    }
    cout << i << endl;
    if (s == 0)
    {
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << " ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
    }
    else
    {
        cout << -1 << "asdasd " << -1;
        return 0;
    }
}