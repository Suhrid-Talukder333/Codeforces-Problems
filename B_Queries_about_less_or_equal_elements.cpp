#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    vector<int> ans(m);
    for (int i = 0; i < m; i++) {
        int result = 0;
        int high = n-1;
        int low = -1;
        while(low < high) {
            int mid = (low + high + 1) / 2;
            if(arr1[mid]<=arr2[i]) {
                result = max(result, (mid+1));
                low = mid;
            }
            else {
                high = mid - 1;
            }
        }
        ans[i] = result;
    }
    for (int i = 0; i < m; i++) {
        cout << ans[i] << " ";
    }
}