#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        arr[i + 1] += arr[i];
    }

    int k;
    cin >> k;
    int arr1[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr1[i];
    }
    vector<int> ans(k, INT_MAX);
    for (int i = 0; i < k; i++)
    {
        int high = n;
        int low = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] >= arr1[i])
            {
                ans[i] = min(ans[i], (mid + 1));
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << endl;
    }
}