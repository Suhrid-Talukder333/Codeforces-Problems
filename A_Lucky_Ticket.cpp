#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int fhalf = 0;
    int lhalf = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != '4' && a[i] != '7')
        {
            cout << "NO";
            return 0;
        }
        else
        {
            fhalf += a[i] - '0';
        }
    }
    for (int i = n / 2; i < a.length(); i++)
    {
        if (a[i] != '4' && a[i] != '7')
        {
            cout << "NO";
            return 0;
        }
        else
        {
            lhalf += a[i] - '0';
        }
    }
    if (lhalf == fhalf)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}