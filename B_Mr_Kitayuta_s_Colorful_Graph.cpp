#include <bits/stdc++.h>
using namespace std;

struct u
{
    int parent[101];
    int size[101];

    void init()
    {
        memset(parent,-1,sizeof(parent));
        for (int i = 0; i <= 100; i++)
        {
            size[i] = 1;
        }
    }
   
    int findParent(int x)
    {
        if (parent[x] == -1)
        {
            return x;
        }
        return parent[x] = findParent(parent[x]);
    }

    void makeUnion(int a, int b)
    {
        int x = findParent(a);
        int y = findParent(b);
        if (x == y)
        {
            return;
        }
        if (size[x] > size[y])
        {
            parent[y] = x;
            size[x] += size[y];
        }
        else
        {
            parent[x] = y;
            size[y] += size[x];
        }
    }

    bool same(int a, int b)
    {
        return findParent(a) == findParent(b);
    }
};

u graph[101];

int main()
{
    for(int i=1; i<=100; i++){
        graph[i].init();
    }
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        graph[c].makeUnion(a,b);
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        int ans = 0;
        for(int i=1; i<=100; i++) {
            if(graph[i].same(a,b)){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}