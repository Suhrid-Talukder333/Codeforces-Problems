#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    int a;
    cin >> a;
    cout << arr[a / 10] * arr[a % 10];
}