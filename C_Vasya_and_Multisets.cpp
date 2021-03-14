#include<bits/stdc++.h>
using namespace std;

int check[101];

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        check[arr[i]]++;
    }
    int nice_numbers = 0;
    for (int i = 0; i < n; i++)
    {
        if(check[arr[i]]==1) {
            nice_numbers++;
        }
    }
    if (nice_numbers % 2 == 0)
    {
        cout << "YES" << endl;
        int y = nice_numbers / 2;
        int i = 0;
        for (; i < n; i++) {
            if(check[arr[i]]==1) {
                nice_numbers--;
            }
            if(nice_numbers==y-1) {
                break;
            }
            cout << "B";
        }
        for (; i < n; i++) {
            cout << 'A';
        }
    }
    else {
        cout << "NO";
    }
}