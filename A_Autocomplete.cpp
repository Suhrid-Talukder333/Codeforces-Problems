#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    string arr[n];
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() >= s.length())
        {
            bool good = true;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] != arr[i][j])
                {
                    good = false;
                    break;
                }
            }
            if (good)
            {
                if (ans.length() == 0)
                {
                    ans = arr[i];
                }
                else
                {
                    if (arr[i] < ans)
                    {
                        ans = arr[i];
                    }
                }
            }
        }
    }
    if (ans.length() == 0)
    {
        cout << s;
    }
    else
    {
        cout << ans;
    }
}