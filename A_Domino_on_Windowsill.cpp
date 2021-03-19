#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k1, k2;
        cin>>n>>k1>>k2;
        int a, b;
        cin >> a >> b;
        int ans1 = (k1 + k2) / 2;
        int ans2 = ((2 * n) - (k1 + k2)) / 2;
        if(ans1>=a && ans2>=b) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}