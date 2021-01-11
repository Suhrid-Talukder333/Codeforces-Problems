#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x;
    cin >> x;
    if (x >= abs(a) + abs(b))
    {
        if (x == abs(a) + abs(b))
        {
            cout << "Yes";
        }
        else if (x > abs(a) + abs(b) && ((x-abs(a) + abs(b)) % 2 == 0))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "No";
    }
}