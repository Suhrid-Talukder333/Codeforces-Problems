#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string a;
        cin >> a;
        string b;
        b.push_back(a[0]);
        b.push_back(a[1]);
        for (int i = 3; i<a.size(); i+=2) {
            b.push_back(a[i]);
        }
        cout << b << endl;
    }
}