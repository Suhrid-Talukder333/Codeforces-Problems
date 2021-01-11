#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string num[10];
    string ans = "";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < s.length(); i += 10)
    {
        string t = "";
        for (int j = i; j < i + 10; j++)
        {
            t += (s[j]);
        }
        for (int j = 0; j < 10; j++)
        {
            if (t == num[j])
            {
                ans += to_string(j);
                break;
            }
        }
    }
    cout << ans;
}