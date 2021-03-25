#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = 4;
        int i = 3;
        while (n){
            if(n%i==0) {
                cout << n/i << endl;
                break;
            }
            i += k;
            k *= 2;
        }
    }
}