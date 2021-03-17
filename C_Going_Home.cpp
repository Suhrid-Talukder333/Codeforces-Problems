#include<bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, vector<int, int>> sums;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) {
            sums[arr[i] + arr[j]].push_back(make_pair(i, j));
        }
    }
    sort(sums.begin(), sums.end());
    for (int i = 0; i < sums.size(); i++) {
        for (int j = i + 1; j < sums.size(); j++) {
            if(sums[i].first!=sums[j].first) {
                break;
            }
            if (sums[i].second.first != sums[j].second.first && sums[i].second.first != sums[j].second.second && sums[i].second.second != sums[j].second.first && sums[i].second.second != sums[j].second.second)
            {
                cout << "YES" << endl;
                cout << sums[i].second.first+1 << " " << sums[i].second.second+1 << " " << sums[j].second.first+1 << " " << sums[j].second.second+1;
                return 0;
            }
        }
    }
    cout << "NO";
}