#include<bits/stdc++.h>
using namespace std;

int main() {
    int c[5];
    int total=0;
    for (int i = 0; i < 5; i++) {
        cin >> c[i];
        total += c[i];
    }
    if(total==0) {
        cout << -1;
        return 0;
    }
    if(total%5==0) {
        cout<<total/5;
    }
    else {
        cout << -1;
    }
}