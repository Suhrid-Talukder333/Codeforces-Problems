#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a |= x;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        b |= x;
    }
    cout << a + b;
}