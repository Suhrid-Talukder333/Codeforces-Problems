#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, m;
    cin >> d >> m;
    vector<pair<int, int>> days;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < d; i++)
    {
        int a, b;
        cin >> a >> b;
        days.push_back(make_pair(a, b));
        sum1 += a;
        sum2 += b;
    }
    if (sum2 < m || sum1 > m)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        if (sum1 == m)
        {
            for (int i = 0; i < d; i++)
            {
                cout << days[i].first << " ";
            }
        }
        else if (sum2 == m)
        {
            for (int i = 0; i < d; i++)
            {
                cout << days[i].second << " ";
            }
        }
        else
        {
            int e = m - sum1;
            int i = 0;
            while (e)
            {
                if (days[i].first + e <= days[i].second)
                {
                    days[i].first += e;
                    e -= e;
                }
                else
                {
                    int x = days[i].second - days[i].first;
                    days[i].first = days[i].second;
                    e -= x;
                }
                i++;
            }
            for (int i = 0; i < d; i++)
            {
                cout << days[i].first << " ";
            }
        }
    }
}