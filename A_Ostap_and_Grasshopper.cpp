#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'G' || s[i] == 'T')
        {
            for (int j = i; j < s.length(); j += k)
            {
                if (s[j] == '#')
                {
                    cout << "NO";
                    return 0;
                }
                if (j != i && (s[j] == 'G' || s[j] == 'T'))
                {
                    cout << "YES";
                    return 0;
                }
            }
            cout << "NO";
            break;
        }
    }
}