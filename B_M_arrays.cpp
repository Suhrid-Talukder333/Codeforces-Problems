#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int ans = 0;
        vector<pair<int, bool>> arr;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            arr.push_back(make_pair(x, false));
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            if(arr[i].second == true) {
                continue;
            }
            bool k = true;
            int temp = arr[i].first;
            arr[i].second = true;
            while (k)
            {
                for (int j = n - 1; j >= i; j--) {
                    if (j == i)
                    {
                        k = false;
                        break;
                    }
                    if(arr[j].second == true) {
                        continue;
                    }
                    if((temp+arr[j].first)%m==0) {
                        arr[j].second = true;
                        temp = arr[j].first;
                        break;
                    }
                }
            }
            ans++;
        }
        cout << ans << endl;
    }
}