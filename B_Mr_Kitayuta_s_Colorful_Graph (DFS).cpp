#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> graph[101];
bool visited[101];

bool dfs(int a, int b, int w)
{
    visited[a] = true;
    if (a == b)
    {
        return true;
    }
    for (int i = 0; i < graph[a].size(); i++)
    {
        pair<int, int> x = graph[a][i];
        if ((x.second == w) && visited[x.first] == false)
        {
            if (dfs(x.first, b, w))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
        graph[b].push_back(make_pair(a, c));
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for (int i = 1; i <= 100; i++)
        {
            for (int i = 1; i <= 100; i++)
            {
                visited[i] = false;
            }
            if (dfs(a, b, i))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}