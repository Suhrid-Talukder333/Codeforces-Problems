#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxPeakCount = 0;
        for (int i = 1; i < k - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                maxPeakCount++;
            }
        }
        int start = 0;
        int peak = maxPeakCount;
        for (int i = 1, j = k; j < n; i++, j++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                peak--;
            }
            if (arr[j - 1] > arr[j - 2] && arr[j - 1] > arr[j])
            {
                peak++;
            }
            if (peak > maxPeakCount)
            {
                maxPeakCount = peak;
                start = i;
            }
        }
        cout << maxPeakCount + 1 << " " << start + 1 << "\n";
    }
}