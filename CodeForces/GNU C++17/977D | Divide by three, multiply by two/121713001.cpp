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
 
map<ll,bool> vis,ache;
list<ll> ans;
map<ll,vll> components,graph;
map<ll,ll> indegree;
ll len=0;
 
void dfs(ll u)
{
    // debx(u);
    vis[u]=1;
    ll v1=u*2;
    ll v2=-1; if(u%3==0) v2=u/3;
    if(!vis[v1] && ache[v1])
    {
        graph[u].pb(v1);
        components[len].pb(v1);
        indegree[v1]++;
        dfs(v1);
    }
    else if(!vis[v2] && ache[v2])
    {
        graph[u].pb(v2);
        components[len].pb(v2);
        indegree[v2]++;
        dfs(v2);
    }
}
 
void dfs2(ll u)
{
    cout<<u<<" ";
    vis[u]=1;
    for(auto v: graph[u])
    {
        if(!vis[v])
        {
            dfs2(v);
        }
    }
}
 
void solve()
{
    ll n; cin>>n;
    vll v;
    for(ll i=0; i<n; i++)
    {
        ll val; cin>>val;
        v.pb(val);
        ache[val]=1;
    }
    rsrt(v);
    for(ll i=0; i<n; i++)
    {
        if(!vis[v[i]])
        {
            components[len].pb(v[i]);
            dfs(v[i]);
            len++;
        }
    }
    map<ll,bool> done;
    for(ll i=0; i<len; i++)
    {
        for(ll j=0; j<len; j++)
        {
            if(j==i || done[j]) continue;
            ll ilast=components[i][sz(components[i])-1];
            ll jfirst=components[j][0];
            if(ilast*2==jfirst)
            {
                graph[ilast].pb(jfirst);
                done[j]=1;
                indegree[jfirst]++;
                continue;
            }
            else if(ilast%3==0 && ilast/3==jfirst)
            {
                graph[ilast].pb(jfirst);
                done[j]=1;
                indegree[jfirst]++;
                continue;
            }
        }
    }
    vis.clear();
    // debv(components[0]);
    // debv(components[1]);
    for(ll i=0; i<n; i++)
    {
        // deb2(v[i],indegree[v[i]]);
        if(indegree[v[i]]==0)
        {
            dfs2(v[i]);
            break;
        }
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