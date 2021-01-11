#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << 1 << endl;
        cout << 1;
        return 0;
    }
    if (n == 3)
    {
        cout << 2 << endl;
        cout << 1 << " " << 3;
        return 0;
    }
    if (n == 4)
    {
        cout << 4 << endl;
        cout << 3 << " " << 1 << " " << 4 << " " << 2;
        return 0;
    }
    vector<int> arr;
    for (int i = 1, j = 1 + ceil((double)n / 2); i <= ceil((double)n / 2); i++, j++)
    {
        arr.push_back(i);
        if (j <= n)
        {
            arr.push_back(j);
        }
    }
    cout << arr.size() << endl;
    for (int i = 0; i < (int)arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}