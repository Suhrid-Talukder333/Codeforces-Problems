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
        int arr1[n], arr2[n];
        int sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            sum1 += arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        int j = 0;
        int l = n - 1;
        while (k--)
        {
            if (arr1[j] < arr2[l])
            {
                sum1 -= arr1[j];
                sum1 += arr2[l];
                j++;
                l--;
            }
            else {
                break;
            }
        }
        cout << sum1 << endl;
    }
}