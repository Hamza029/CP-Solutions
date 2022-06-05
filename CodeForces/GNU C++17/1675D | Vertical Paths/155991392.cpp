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
#define M 200005
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
    
*/
 
vector<ll> graph[M];
vector<ll> tgraph[M];
bool vis[M];
vll order;
vll order2;
 
void dfs(ll u)
{
    // debx(u);
    vis[u]=1;
    order.pb(u);
    for(auto v: graph[u])
    {
        if(!vis[v])
        {
            dfs(v);
            return;
        }
    }
}
 
void tdfs(ll u, ll p)
{
    // debx(u);
    if(u!=p) order.pb(u);
    vis[u]=1;
    for(auto v: tgraph[u])
    {
        if(!vis[v])
        {
            tdfs(v,p);
            return;
        }
    }
}
 
void solve()
{
    ll n; cin>>n;
 
    for(ll i=1; i<=n; i++) graph[i].clear(), tgraph[i].clear();
    memo(vis,0);
 
    for(ll i=1; i<=n; i++)
    {
        ll v=i,u; cin>>u;
        graph[u].pb(v);
        tgraph[v].pb(u);
    }
 
    vll ans[n+1];
    ll c=0;
 
    for(ll i=1; i<=n; i++)
    {
        vll v;
        if(!vis[i])
        {
            dfs(i);
            for(auto x: order) v.pb(x);
            order.clear();
            tdfs(i,i);
        }
 
        if(sz(order)+sz(v)<=0) continue;
 
        c++;
 
        // cout<<sz(order)+sz(v)<<endl;
        // debv(order); debv(v);
 
        reverse(all(order));
        
        for(ll i=0; i<sz(order); i++)
        {
            ans[c].pb(order[i]);
        }
        for(ll i=0; i<sz(v); i++)
        {
            ans[c].pb(v[i]);
        }
 
        order.clear();
    }
 
    cout<<c<<endl;
    // debx(c);
 
    for(ll i=1; i<=c; i++)
    {
        cout<<sz(ans[i])<<endl;
        for(auto x: ans[i]) cout<<x<<" ";
        cout<<endl;
    }
    // cout<<endl;
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