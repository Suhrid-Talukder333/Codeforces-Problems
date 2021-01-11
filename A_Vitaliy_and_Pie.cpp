#include <bits/stdc++.h>
using namespace std;
int check[123];

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            check[s[i]]++;
        }
        else
        {
            if (check[s[i] - 'A' + 'a'] == 0)
            {
                ans++;
            }
            else
            {
                check[s[i] - 'A' + 'a']--;
            }
        }
    }
    cout << ans;
}