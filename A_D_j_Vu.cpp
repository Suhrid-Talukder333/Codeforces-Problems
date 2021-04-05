#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        bool good = false;
        if (a.size() % 2 == 0)
        {
            a.insert((a.size() / 2), "a");
            good = true;
        }
        else
        {
            for (int i = 0, j = a.size() - 1; i < j; i++, j--)
            {
                if (a[i] != 'a' && a[j] != 'a')
                {
                    a.insert(i, "a");
                    good = true;
                    break;
                }
            }
            if (!good)
            {
                if (a[a.size() / 2] != 'a')
                {
                    a.insert(a.size() / 2, "a");
                    good = true;
                }
            }
        }
        if (good)
        {
            cout << "YES" << endl;
            cout << a << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}