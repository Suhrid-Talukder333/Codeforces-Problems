#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int pieces = 0;
    ans += a;
    pieces = a;
    while(pieces>=b) {
        ans += pieces / b;
        int x = pieces % b;
        pieces /= b;
        pieces += x;
    }
    cout << ans;
}