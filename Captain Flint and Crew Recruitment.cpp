#include<iostream>
using namespace std;

int main()
{
    long long int testcase;
    cin>>testcase;
    for(int i=1; i<=testcase; i++)
    {
       {
        int n; cin >> n;
        if(n <= 30){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            if(n == 36 || n == 40 || n == 44){
                cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31 << endl;
            }
            else{
                cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << endl;
            }
        }
    }
    }
}
