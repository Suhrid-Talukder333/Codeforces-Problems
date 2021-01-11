#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int ans = 0;
    int i;
    int j;
    for (i = 0; i < a.length(); i++)
    {
        ans++;
        for (j = 1; j < 5; j++)
        {
            if (a[i + j] != a[i])
            {
                break;
            }
            if (i + j >= a.length())
            {
                break;
            }
        }
        i += j-1;
    }
    cout << ans;
}