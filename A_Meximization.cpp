#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int check[101];
        memset(check, 0, sizeof(check));
        int n;
        cin >> n;
        vector<int> arr;
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (check[x] == 0)
            {
                arr.push_back(x);
                check[x]++;
            }
            else
            {
                temp.push_back(x);
            }
        }
        sort(arr.begin(), arr.end());
        sort(temp.begin(), temp.end());
        for (int i : temp)
        {
            arr.push_back(i);
        }
        for (int a : arr)
        {
            cout << a << " ";
        }
        cout << endl;
    }
}