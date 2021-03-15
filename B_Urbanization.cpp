#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    if(a>b) {
        swap(a, b);
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    double result1 = 0.000000;
    for (int i = n - 1; i >= n - a; i--)
    {
        result1 += arr[i];
    }
    double result2 = 0.000000;
    for (int i = n - a - 1; i >= n - a - b; i--)
    {
        result2 += arr[i];
    }
    printf("%.6f", ((result1 / a) + (result2 / b)));
}