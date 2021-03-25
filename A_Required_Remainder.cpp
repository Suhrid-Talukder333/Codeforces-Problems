#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y, n;
        cin >> x >> y >> n;
        int a = n % x;
        if(a!=y) {
            int ans1 = n + abs(a-y);
            int ans2 = n - abs(a - y);
            if (ans1 > n)
            {
                ans1 -= x;
            }
            if(ans1%x==y && ans2%x==y) {
                cout << max(ans1, ans2);
            }
            else if(ans1%x==y) {
                cout << ans1;
            }
            else {
                cout << ans2;
            }
        }
        else {
            cout << n;
        }
        cout << endl;
    }
}