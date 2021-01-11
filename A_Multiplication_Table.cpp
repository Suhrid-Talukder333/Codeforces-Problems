#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    set<int> a;
    for (int i = 1; i <= n && i <= sqrt(x); i++)
    {
        if (x % i == 0 && x / i <= n)
        {
            a.insert(i);
            a.insert(x / i);
        }
    }
    cout << (int)a.size();
}