#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int zero, one;
        cin >> zero >> one;
        string s;
        cin >> s;
        if (s.size() % 2 == 0)
        {
            for (int i = 0, j = s.size() - 1; i < s.size() / 2, j >= s.size() / 2; i++, j--)
            {
                if (s[i] == '?' && s[j] == '?')
                {
                    if (zero >= one)
                    {
                        if (zero >= 2)
                        {
                            s[i] = '0';
                            s[j] = '0';
                            zero -= 2;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    else
                    {
                        if (one >= 2)
                        {
                            s[i] = '1';
                            s[j] = '1';
                            one -= 2;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                }
                else
                {
                    if (s[i] == '?' && s[j] == '1')
                    {
                        if (one >= 1)
                        {
                            s[i] = '1';
                            one--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    else if (s[i] == '?' && s[j] == '0')
                    {
                        if (zero >= 1)
                        {
                            s[i] = '0';
                            zero--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    if (s[j] == '?' && s[i] == '1')
                    {
                        if (one >= 1)
                        {
                            s[j] = '1';
                            one--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    else if (s[j] == '?' && s[i] == '0')
                    {
                        if (zero >= 1)
                        {
                            s[j] = '0';
                            zero--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                }
            }
            for (auto x : s)
            {
                cout << x;
            }
            cout << " " << t << endl;
        }
        else
        {
            for (int i = 0, j = s.size() - 1; i<s.size() / 2, j> s.size() / 2; i++, j--)
            {
                if (s[i] == '?' && s[j] == '?')
                {
                    if (zero >= one)
                    {
                        if (zero >= 2)
                        {
                            s[i] = '0';
                            s[j] = '0';
                            zero -= 2;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    else
                    {
                        if (one >= 2)
                        {
                            s[i] = '1';
                            s[j] = '1';
                            one -= 2;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                }
                else
                {
                    if (s[i] == '?' && s[j] == '1')
                    {
                        if (one >= 1)
                        {
                            s[i] = '1';
                            one--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    else if (s[i] == '?' && s[j] == '0')
                    {
                        if (zero >= 1)
                        {
                            s[i] = '0';
                            zero--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    if (s[j] == '?' && s[i] == '1')
                    {
                        if (one >= 1)
                        {
                            s[j] = '1';
                            one--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                    else if (s[j] == '?' && s[i] == '0')
                    {
                        if (zero >= 1)
                        {
                            s[j] = '0';
                            zero--;
                        }
                        else
                        {
                            cout << -1;
                            break;
                        }
                    }
                }
            }
            if (s[s.size() / 2] == '?')
            {
                if (zero >= one)
                {
                    s[s.size() / 2] = '0';
                    for (auto x : s)
                    {
                        cout << x;
                    }
                    cout << " " << t << endl;
                }
                else if (one > zero)
                {
                    s[s.size() / 2] = '1';
                    for (auto x : s)
                    {
                        cout << x;
                    }
                    cout << " " << t << endl;
                }
                else
                {
                    cout << -1 << endl;
                    break;
                }
            }
        }
    }
}