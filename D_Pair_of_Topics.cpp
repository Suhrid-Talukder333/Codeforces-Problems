#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long teacher[n];
    long long student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> teacher[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long x = student[i] + student[j];
            long long y = teacher[i] + teacher[j];
            if (x < y)
            {
                ans++;
            }
        }
    }
    cout << ans;
}