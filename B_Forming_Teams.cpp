#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> enemies(n + 1, 0);
    int ans = 0;
    vector<bool> visited(n + 1, false);
    for (int i = 1; i <= k; i++) {
        int a, b;
        cin >> a >> b;
        enemies[a] = b;
        enemies[b] = a;
    }
    for (int i = 1; i <= n; i++) {
        if (enemies[i] != 0 && enemies[enemies[i]] != 0)
        {
            visited[i] = visited[enemies[enemies[i]]] = true;
            cout << i << endl;
            ans++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(visited[i]==true) {
            continue;
        }
        for (int j = i + 1; j <= n; j++) {
            if(enemies[i] != j && enemies[j] != i) {
                visited[i] = visited[j] = true;
                ans++;
                break;
            }
        }
    }
    // cout<<n-ans;
}