#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int start = INT_MAX, end = -1;
    int colStart = INT_MAX, colEnd = -1;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
            {
                colStart = min(colStart,i);
                start = min(start, j);
                end = max(end, j);
                colEnd = max(colEnd, i);
            }
        }
    }
    for (int i = colStart; i <= colEnd; i++)
    {

        for (int j = start; j <= end; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}