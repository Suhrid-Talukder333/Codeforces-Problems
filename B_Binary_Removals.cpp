#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string a;
        cin>>a;
        string b = a;
        sort(b.begin(), b.end());
        if(a==b) {
            cout << "YES" << endl;
            continue;
        }
        int double_one = 0;
        int double_zero = 0;
        for (int i = 0; i < a.size()-1; i++)
        {
            if(a[i]==a[i+1]) {
                if (a[i] == '1') {
                    double_one++;
                }
                else {
                    double_zero++;
                }
            }
        }
        if (double_one >= 1 && double_zero >= 1)
        {
            cout << "NO" << endl;
        }else {
          cout << "YES" << endl;
        }
    }
}