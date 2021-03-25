#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin>>n>>t;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pos = 1;
    while(pos<=t) {
        if(pos==t) {
            cout << "YES";
            break;
        }
        pos += arr[pos - 1];
        if(pos>t) {
            cout << "NO";
            break;
        }
    }
}