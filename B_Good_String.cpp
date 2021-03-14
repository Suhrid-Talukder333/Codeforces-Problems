#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int ans1 = 0;
        int ans2 = 0;
        int i = 0;
        while(a[i]!='>'&& i < a.size()) {
            ans1++;
            i++;
        }
        i = a.size() - 1;
        while (a[i]!='<'&& i >=0 ) {
            ans2++;
            i--;
        }
        cout << min(ans1,ans2)<<endl;
    }
}