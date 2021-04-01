#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,w;
        cin>>n>>w;
        map<int,int> mp;
        vector<int> v;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            mp[x]++;
            v.push_back(x);
        }
        int h =0;
        int sum=0;
        sort(v.rbegin(),v.rend());
        for(auto i:v) {
            if(mp[i]>0 && sum+i==w) {
                sum+=i;
                mp[i]--;
            }
            else if(mp[i]>0 && sum+i<w) {
                sum+=i;
                mp[i]--;
                if(mp[(w-sum)]){
                    mp[(w-sum)]--;
                    sum=w;
                }
            }
            cout<<sum<<endl;
            if(sum==w) {
                sum=0;
                h++;
            }
        }
        if(sum!=0){
            h++;
        }
        cout<<h<<endl;
    }
}