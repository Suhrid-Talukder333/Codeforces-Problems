#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    string a[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    string b[] = {"0", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    string c[] = {"1", "2", "3", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string d[] = {"1", "2", "twen", "thir", "for", "fif", "six", "seven", "eigh", "nine"};
    if (n < 11)
    {
        cout << a[n];
    }
    else if (n >= 11 && n <= 20)
    {
        if (n == 20)
        {
            cout << b[10];
            return 0;
        }
        y = n % 10;
        cout << b[y];
    }
    else
    {
        x = n / 10;
        y = n % 10;
        if (n % 10 == 0)
        {
            cout << c[x];
        }
        else
        {
            cout << d[x] << "ty-" << a[y];
        }
    }
}
