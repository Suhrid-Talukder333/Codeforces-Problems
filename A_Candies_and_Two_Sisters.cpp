#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = n / 2;
        if(ans*2==n) {
            if(ans-1>0) {
                cout << ans-1;
            }
            else {
                cout << 0;
            }
        }else {
            cout << ans;
        }
        cout << endl;
    }
}