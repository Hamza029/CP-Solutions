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
#define deb2(a,b) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<endl
#define debv(v) cout<<#v<<" = "; for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(int i=0; i<v.size(); i++) {cout<<#v<<"["<<i<<"] = "<<v[i]<<endl;}
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
    ---- take notes here ----
    
*/
 
vector<set<ll>> graph(200000+5);
bool mark[200000+5];
set<ll> bads;
 
void solve()
{
    ll n,m; cin>>n>>m;
    ll bad=0;
    memset(mark,0,sizeof(mark));
    for(ll i=1; i<=m; i++)
    {
        ll u,v; cin>>u>>v;
        graph[u].insert(v);
        graph[v].insert(u);
        if(u<v && !mark[u])
        {
            mark[u]=1;
            bad++;
        }
        else if(v<u && !mark[v])
        {
            mark[v]=1;
            bad++;
        }
    }
    ll q; cin>>q;
    while(q--)
    {
        ll type; cin>>type;
        if(type==1)
        {
            ll u,v; cin>>u>>v;
            graph[u].insert(v);
            graph[v].insert(u);
            if(u<v && !mark[u])
            {
                mark[u]=1;
                bad++;
            }
            else if(v<u && !mark[v])
            {
                mark[v]=1;
                bad++;
            }
        }
        else if(type==2)
        {
            ll u,v; cin>>u>>v;
            graph[u].erase(v);
            graph[v].erase(u);
            if(mark[u])
            {
                if(sz(graph[u])==0)
                {
                    mark[u]=0;
                    bad--;
                    // debx(u);
                }
                else
                {
                    // auto it=graph[u].begin();
                    auto it=graph[u].end(); it--;
                    if(*it<=u)
                    {
                        mark[u]=0;
                        bad--;
                        // debx(u);
                    }
                }
            }
            if(mark[v])
            {
                if(sz(graph[v])==0)
                {
                    mark[v]=0;
                    bad--;
                    // debx(v);
                }
                else
                {
                    // auto it=graph[v].begin();
                    auto it=graph[v].end(); it--;
                    if(*it<=v)
                    {
                        mark[v]=0;
                        bad--;
                        // debx(v);
                    }
                }
            }
        }
        else if(type==3)
        {
            ll ans=n-bad;
            cout<<ans<<endl;
        }
        // for(ll i=1; i<=n; i++)
        // {
        //     cout<<i<<"----> ";debv(graph[i]);
        // }
        // debx(bad);
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