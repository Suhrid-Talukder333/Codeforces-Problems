#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int w;
        cin >> n >> w;
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        int h = 1;
        int left = w;
        while (!s.empty())
        {
            auto it = s.upper_bound(left);
            if (it != s.begin())
            {
                it--;
                int val = *it;
                left -= val;
                s.erase(it);
            }
            else
            {
                left = w;
                h++;
            }
        }

        cout << h << endl;
    }
}