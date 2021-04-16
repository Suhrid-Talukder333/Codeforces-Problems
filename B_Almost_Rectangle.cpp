#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> points;
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*')
                {
                    points.push_back(make_pair(i, j));
                }
            }
        }
        if (points[0].first == points[1].first)
        {
            if (points[0].first < n - 1)
            {
                arr[points[0].first + 1][points[0].second] = '*';
                arr[points[1].first + 1][points[1].second] = '*';
            }
            else
            {
                arr[points[0].first - 1][points[0].second] = '*';
                arr[points[1].first - 1][points[1].second] = '*';
            }
        }
        else if (points[0].second == points[1].second)
        {
            if (points[0].second < n - 1)
            {
                arr[points[0].first][points[0].second + 1] = '*';
                arr[points[1].first][points[1].second + 1] = '*';
            }
            else
            {
                arr[points[0].first][points[0].second - 1] = '*';
                arr[points[1].first][points[1].second - 1] = '*';
            }
        }
        else
        {
            arr[points[1].first][points[0].second] = '*';
            arr[points[0].first][points[1].second] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}