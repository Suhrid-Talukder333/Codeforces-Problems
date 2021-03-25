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
        int arr[n];
        int ans1 = 0;
        int ans2 = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] % 2;
        }

        for (int i = 0; i < n; i++)
        {
            int x = i % 2;
            if (arr[i] != x)
            {
                if(arr[i]==0) {
                    ans1++;
                }
                else {
                    ans2++;
                }
            }
        }
        if(ans1!=ans2) {
            cout << -1 << endl;
        }
        else {
            cout << ans1<<endl;
        }
    }
}