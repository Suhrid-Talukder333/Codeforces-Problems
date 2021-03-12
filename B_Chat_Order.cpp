#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, bool> sorted;
    int n;
    cin >> n;
    string arr[n];
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted[arr[i]] = false;
    }
    for (int i = n - 1; i >= 0; i--) {
        if(ans.empty()) {
            sorted[arr[i]] = true;
            ans.push_back(arr[i]);
        }
        else {
            if(!sorted[arr[i]]) {
                sorted[arr[i]] = true;
                ans.push_back(arr[i]);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}