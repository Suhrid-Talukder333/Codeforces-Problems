#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i = 2; i < a.size(); i++)
    {
        int k = a[i - 2] - 'A' + a[i - 1] - 'A';
        int l = a[i] - 'A';
        if (k % 26 != l % 26)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}