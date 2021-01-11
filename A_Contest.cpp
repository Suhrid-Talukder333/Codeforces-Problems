#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int vas, mis;
    vas = max((3 * b) / 10, (b - (b / 250 * d)));
    mis = max((3 * a) / 10, (a - (a / 250 * c)));
    if (vas > mis)
    {
        cout << "Vasya";
    }
    else if (vas == mis)
    {
        cout << "Tie";
    }
    else
    {
        cout << "Misha";
    }
}