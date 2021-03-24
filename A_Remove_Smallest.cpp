#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i<n; i++) 
        {
            cin >> arr[i];
        }
        if(n==1) {
            cout << "YES" << endl;
            continue;
        }
        sort(arr, arr + n);
        int def = 0;
        for (int i = 0; i < n-1; i++)
        {
            def= max(def,(arr[i+1]-arr[i]));
        }
        if(def>1) {
            cout<<"NO"<<endl;
        }else {
            cout<<"YES"<<endl;
        }
    }
}