#include <bits/stdc++.h>
 
using namespace std;
 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define readl(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
#define readi(v,n) for(int i=0;i<n;i++) {int val; cin>>val; v.pb(val);}
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define MIN(v) *min_element(v.begin(), v.end())
#define MAX(v) *max_element(v.begin(), v.end())
#define sz(x) ((ll) (x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(ll i = (a); i < (b); i++)
#define rep2(i, a, b) for(ll i = (a); i <= (b); i++)
#define vll vector <ll>
#define vii vector <int>
#define pii pair <int, int>
#define pll pair <ll, ll>
#define M 1000007
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define inf 1000000000000000000
#define ninf -1000000000000000000
#define memo(x,val) memset(x,val,sizeof(x))
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
// debugging
 
#define deb(n) cout<<"--"<<(n)<<"--"<<endl
#define debx(x) cout << #x << " = " << (x) << endl
#define deb2(a,b) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<endl
#define deb3(a,b,c) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<endl
#define debv(v) cout<<#v<<" = "; for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(int i=0; i<v.size(); i++) {cout<<#v<<"["<<i<<"] = "<<v[i]<<endl;}
 
template<typename... T>
void debm(T&&... args) {
    ((cout << args << ", "), ...);
    cout << endl;
}
 
/*
    ---- take notes here ----
1
11
1 2 3 4 4 4 1 1 1 8
WBWBWWBBWWW
*/
 
vector<ll> graph[4005];
vll levels[4005];
bool vis[4005];
ll level[4005];
int nodes,edges;
string s;
ll ans=0;
ll B[4005],W[4005];
ll maxLevel=0;
 
void bfs(ll u)
{
    queue<ll> q;
    q.push(u);
    vis[u]=1;
    level[u]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
 
        maxLevel=max(maxLevel,level[u]);
        levels[level[u]].pb(u);
 
        for(auto v: graph[u])
        {
            if(!vis[v])
            {
                vis[v]=1;
                level[v]=level[u]+1;
 
                q.push(v);
            }
        }
    }
}
 
void solve()
{
    cin>>nodes;
 
    for(ll i=1; i<=nodes; i++)
    {
        graph[i].clear();
        levels[i].clear();
    }
 
    ll par[nodes+1];
    par[1]=par[0]=0;
 
    for(ll i=2; i<=nodes; i++)
    {
        ll u; cin>>u;
        ll v=i;
        graph[u].pb(v);
        par[v]=u;
        // graph[v].pb(u);
    }
 
    cin>>s;
 
    memo(vis,0);
    memo(level,0);
    memo(B,0);
    memo(W,0);
 
    for(ll i=0; i<nodes; i++)
    {
        if(s[i]=='W') W[i+1]++;
        else B[i+1]++;
    }
 
    maxLevel=0;
 
    bfs(1);
 
    for(ll i=maxLevel; i>=1; i--)
    {
        for(auto v: levels[i])
        {
            B[par[v]]+=B[v];
            W[par[v]]+=W[v];
        }
    }
 
    ans=0;
    for(ll i=1; i<=nodes; i++)
    {
        // deb3(i,W[i],B[i]);
        if(W[i]==B[i]) ans++;
    }
 
    cout<<ans<<endl;
}
 
int main()
{
    FAST
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}