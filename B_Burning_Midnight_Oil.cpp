#include<bits/stdc++.h>
using namespace std;

bool good(int a,int k,int n) {
    int result = a;
    while(a) {
        a = a/k;
        result += a;
    }
    if(result >= n) {
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n,k;
    cin >> n >> k;
    int low = 0;
    int high = n;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(good(mid,k,n)) {
            ans = min(ans, mid);
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }

    cout << ans;
}