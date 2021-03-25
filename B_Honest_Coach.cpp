#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int def = INT_MAX;
        for (int i = n - 1; i > 0; i--) {
            def = min(def, arr[i] - arr[i - 1]);
        }
        cout << def << endl;
    }
}