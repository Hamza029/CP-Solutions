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
#define deb(n) cout<<"--"<<(n)<<"--"<<endl
#define debx(x) cout << #x << " = " << (x) << endl
#define deb2(a,b) cout<<(a)<<"----"<<(b)<<endl
#define debv(v) for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
    ---- take notes here ----
    
*/
 
vll graph[100000+5];
// bool vis[10000+5];
map<pll,ll> ans;
ll n;
// ll cnt=0;
 
// void dfs(ll u)
// {
//     vis[u]=1;
//     for(auto v: graph[u])
//     {
//         if(!vis[v])
//         {
//             if(ans[{u,v}]==-1) ans[{u,v}]=cnt;
//             else ans[{v,u}]=cnt;
//             cnt++;
//             dfs(v);
//         }
//     }
// }
 
void solve()
{
    cin>>n;
    vector<pll> store;
    for(ll i=0; i<n-1; i++)
    {
        ll u,v; cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
        store.pb({u,v});
        ans[{u,v}]=-1;
    }
    bool f=0;
    for(ll i=1; i<=n; i++)
    {
        if(sz(graph[i])>=3)
        {
            ans[{i,graph[i][0]}]=0;
            ans[{graph[i][0],i}]=0;
            ans[{i,graph[i][1]}]=1;
            ans[{graph[i][1],i}]=1;
            ans[{i,graph[i][2]}]=2;
            ans[{graph[i][2],i}]=2;
            f=1;
            break;
        }
    }
    ll cnt=3;
    if(!f) cnt=0;
    for(auto x: store)
    {
        if(ans[{x.ff,x.ss}]!=-1)
        {
            cout<<ans[{x.ff,x.ss}]<<endl;
            continue;
        }
        cout<<cnt<<endl;
        cnt++;
    }
}
 
int main()
{
    FAST
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}