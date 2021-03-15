#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int check[n+1][n+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> check[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        if(arr[i]!=i) {
            int x;
            for (int j = 1; j <= n; j++)
            {
                if(arr[j]==i) {
                    x = j;
                    break;
                }
            }
            if(check[arr[i]][arr[x]]==1) {
                swap(arr[i], arr[x]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}