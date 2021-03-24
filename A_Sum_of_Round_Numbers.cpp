#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n <=10) {
            cout << 1 << endl;
            cout << n;
        }
        else {
            vector<int> ans;
            int i = 10;
            while(n) {
                int k = n%i;
                if(k!=0) {
                    ans.push_back(k);
                }
                n -= k;
                i *= 10;
            }
            cout << ans.size()<<endl;
            for(int a : ans ) {
                cout << a << " ";
            }
        }
        cout << endl;
    }
}