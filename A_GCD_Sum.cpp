#include<bits/stdc++.h>
using namespace std;

long long cal(long long a){
    long long sum =0 ;
 while(a){
        long long x = a%10;
        sum+=x;
        a-=x;
        a/=10;
    }
    return sum;   
}


int main() {
    long long t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long ans = __gcd(n,cal(n));
        if(ans>1){
            cout<<n<<endl;
            continue;
        }
        while(ans==1) {
            n++;
            ans=__gcd(n,cal(n));
        }
        cout<<n<<endl;
    }
}