#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int check[n + 1];
        for (int i = 1; i <= n; i++)
        {
            check[i] = 0;
        }
        int arr[n];
        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (check[x] == 0)
            {
                arr[i] = x;
                check[x] = 1;
            }
            else
            {
                pos.push_back(i);
            }
        }
        for (int i = 0; i < pos.size(); i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (check[j] == 0)
                {
                    arr[pos[i]] = j;
                    check[j] = 1;
                    break;
                }
            }
        }
        for (int i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
        int a = 0, b = 0;
        if (pos.size() >= 2)
        {

            for (int i = pos.size() - 1; i >= 0; i -= 2)
            {
                if (arr[pos[i - 1]] < arr[pos[i]])
                {
                    swap(arr[pos[i - 1]], arr[pos[i]]);
                }
            }
        }
        for (int i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}