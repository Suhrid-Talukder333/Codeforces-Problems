#include<bits/stdc++.h>
using namespace std;

bool good(int a,int b) {
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        sum += (i * 5);
    }
    if(sum+b <= 240) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int low = 0;
    int high = n;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (good(mid, k))
        {
            ans = max(ans, mid);
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans;
}