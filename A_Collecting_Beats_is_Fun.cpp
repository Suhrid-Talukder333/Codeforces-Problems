#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[4][4];
    int check[10];
    memset(check, 0, sizeof(check));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] != '.')
            {
                check[arr[i][j] - '0']++;
            }
        }
    }
    for (int i = 1; i < 10; i++)
    {
        if (check[i] > n * 2)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}