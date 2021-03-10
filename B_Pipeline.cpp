#include <bits/stdc++.h>
using namespace std;

long long sum (long long a) {
    return (a * (a + 1)) / 2;
}

long long sum (long long a, long long b) {
    if(a<=1) {
        return sum(b);
    }else {
        return sum(b) - sum(a - 1);
    }
}

long long binarySearch (long long n,long long k) {
    long long start = 1, end = k;
    while(start<end) {
        long long mid = (start + end) / 2;
        long long s = sum(mid, k);
        if(s==n) {
            return k - mid + 1;
        }
        if(s>n) {
            start = mid + 1;
        }else {
            end = mid;
        }
    }
    return k - start + 2;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    if(n==1) {
        cout << 0;
    }
    else if(n<=k) {
        cout << 1;
    }
    else {
        --k, --n;
        if(sum(k)<n) {
            cout << -1;
        }
        else {
            cout << binarySearch(n, k);
        }
    }
}