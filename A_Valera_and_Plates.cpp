#include <bits/stdc++.h>
using namespace std;

int main()
{
    int plate = 0, bowl = 0;
    int n;
    cin >> n >> bowl >> plate;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            if (bowl == 0)
            {
                ans++;
            }
            else
            {
                bowl--;
            }
        }
        if (arr[i] == 2)
        {
            if (plate != 0)
            {
                plate--;
            }
            else if (bowl != 0)
            {
                bowl--;
            }
            else
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}