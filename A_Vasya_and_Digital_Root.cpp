#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    if (n == 1)
    {
        cout << x;
    }
    else
    {
        if (x == 0 && n > 1)
        {
            cout << "No solution";
        }
        else
        {
            cout << 1;
            for (int i = 1; i < n - 1; i++)
            {
                cout << 0;
            }
            cout << x-1;
        }
    }
}