#include <bits/stdc++.h>
using namespace std;

int sum(int a)
{
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main()
{
    int a;
    cin >> a;
    while (a >= 10)
    {
        a = sum(a);
    }
    cout << a;
}