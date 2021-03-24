#include<bits/stdc++.h>
using namespace std;


int main() {
    map<string, int> m;
    int n;
    cin >> n;
    while(n--) {
        string a;
        cin>>a;
        m[a]++;
        if(m[a]==1) {
            cout << "OK";
        }
        else {
            cout << a << m[a] - 1;
        }
        cout << endl;
    }
}