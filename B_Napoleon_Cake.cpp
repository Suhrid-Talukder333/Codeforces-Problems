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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > k)
            {
                k = arr[i] - 1;
                arr[i] = 1;
            }
            else{
                if(k>0) {
                    k--;
                    arr[i] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}