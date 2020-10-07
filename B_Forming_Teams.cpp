#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FOR(i,o,n) for (int i = o; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define pp pair<ll,ll>
#define vl vector<ll>
#define vpp vector<pp>
#define sorta(v) stable_sort(v.begin(),v.end())
#define sortd(v) stable_sort(v.begin(),v.end(),greater <> ())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define INF 1000000000
#define endl '\n'
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
#define fast ios::sync_with_stdio(0);cin.tie(0)
#define all(x) x.begin(),x.end()
#define ms(a,v) memset(a,v,sizeof a)
#define II ({int a; scanf("%d", &a); a;})
#define LL ({Long a; scanf("%lld", &a); a;})
#define DD ({double a; scanf("%lf", &a); a;})
#define mp make_pair
#define gc getchar
#define EPS 1e-10
#define pi 3.1415926535897932384626433832795
#define FI freopen ("in.txt", "r", stdin)
#define FO freopen ("out.txt", "w", stdout)
typedef unsigned long long ull;
typedef set<int> si;
typedef pair<string,ll>psl;
typedef pair<double,double>pdd;

#define forab(i, a, b)	for (__typeof (b) i = (a) ; i <= b ; ++i)
#define rep(i, n)		forab (i, 0, (n) - 1)
#define For(i, n)		forab (i, 1, n)
#define rofba(i, a, b)	for (__typeof (b)i = (b) ; i >= a ; --i)
#define per(i, n)		rofba (i, 0, (n) - 1)
#define rof(i, n)		rofba (i, 1, n)
#define forstl(i, s)	for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)

#ifdef LOCAL
#define __(args...) {dbg,args; cerr<<endl;}
struct debugger{template<typename T> debugger& operator , (const T& v){cerr<<v<<"\t"; return *this; }}dbg;
#define __1D(a,n) rep(i,n) { if(i) printf(" ") ; cout << a[i] ; }
#define __2D(a,r,c,f) forab(i,f,r-!f){forab(j,f,c-!f){if(j!=f)printf(" ");cout<<a[i][j];}cout<<endl;}
#endif
template<class A, class B> ostream &operator<<(ostream& o, const pair<A,B>& p){ return o<<"("<<p.ff<<", "<<p.ss<<")";} //Pair print
template<class T> ostream& operator<<(ostream& o, const vector<T>& v){ o<<"[";forstl(it,v)o<<*it<<", ";return o<<"]";} //Vector print
template<class T> ostream& operator<<(ostream& o, const set<T>& v){ o<<"[";forstl(it,v)o<<*it<<", ";return o<<"]";} //Set print
template<class T> inline void MAX(T &a , T b){ if (a < b ) a = b;}
template<class T> inline void MIN(T &a , T b){ if (a > b ) a = b;}

//Fast Reader
template<class T>inline bool read(T &x){int c=gc();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=gc();}for(x=0;~c&&'0'<=c&&c<='9';c=gc())x=x*10+c-'0';x*=sgn;return ~c;}

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &vis, std::vector<long> &cycle)
{

    if(vis[node])
    {
        return;
    }
    vis[node] = 1;
    cycle.push_back(node);
    for(long p = 0; p < g[node].size(); p++)
    {
        if(!vis[g[node][p]])
        {
            dfs(g[node][p], g, vis, cycle);
        }
    }
    return;
}


int main()
{

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> mark(n, 0);
    long count(0);
    for(long p = 0; p < n; p++)
    {
        std::vector<long> cycle;
        dfs(p, g, mark, cycle);
        if((cycle.size() & 1) && g[cycle.back()].size() == 2)
        {
            ++count;
        }
    }

    if((n - count) & 1)
    {
        ++count;
    }
    printf("%ld\n", count);

    return 0;
}
