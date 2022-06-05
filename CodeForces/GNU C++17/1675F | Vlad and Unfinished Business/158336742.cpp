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
    
*/
 
const ll N=200005;
 
ll n,k,x,y;
vll graph[N];
bool vis[N];
bool mark1[N],mark2[N];
 
void dfs(ll u)
{
    vis[u]=1;
    for(auto v: graph[u])
    {
        if(!vis[v])
        {
            dfs(v);
 
            if(mark1[v])
            {
                // vertices that we will visit in the path from x to y
                mark1[u]=1;
            }
 
            if(mark2[v])
            {
                // vertices that might not be needed to reach from x to y
                // but needed in order to visit one of the k nodes
                mark2[u]=1;
            }
        }
    }
}
 
void solve()
{
    cin>>n>>k>>x>>y;
 
    memo(vis,0);
    memo(mark1,0);
    memo(mark2,0);
 
    for(ll i=1; i<=k; i++)
    {
        ll u; cin>>u;
        mark2[u]=1;
    }
 
    mark1[y]=1;
 
    for(ll i=1; i<=n; i++)
    {
        graph[i].clear();
    }
 
    for(ll i=1; i<=n-1; i++)
    {
        ll u,v; cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
 
    dfs(x);
 
    ll ans=0;
 
    for(ll i=1; i<=n; i++)
    {
        if(i==x)
        {
            continue;
        }
 
        if(mark1[i])
        {
            ans++;
        }
        else if(mark2[i])
        {
            ans+=2;
        }
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