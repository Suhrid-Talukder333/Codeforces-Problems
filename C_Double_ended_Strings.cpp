#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string a;
        string b;
        cin>>a>>b;
        if(b.size()<a.size()) {
            swap(a, b);
        }
        int ans = 0;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < b.size(); j++) {
                int sum = 0;
                int k = i;
                int l = j;
                while (a[k] == b[l] && k < a.size())
                {
                    sum++;
                    k++;
                    l++;
                }
                ans = max(ans, sum);
            }
        }
        cout << (a.size()-ans)+(b.size()-ans) << endl;
    }
}