#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a = n / 2;
        if(a%2!=0) {
            cout << "NO"<<endl;
            continue;
        }
        else {
            cout << "YES" << endl;
            vector<int> evens;
            for (int i = 2; i <= n; i+=2) {
                evens.push_back(i);
                cout << i << " ";
            }
            for (int i = 0; i < evens.size()-1; i++) {
                cout << evens[i] - 1<<" ";
            }
            cout << evens[evens.size() - 1] + a - 1;
            cout << endl;
        }
    }
}