#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
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
 
// PBDS
 
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using multi_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using r_ordered_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using r_multi_ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// ordered_set<ll> s;
// s.order_of_key(k); --> number of items strictly smaller than k
// s.find_by_order(k); --> k-th item in set (0-indexing) (returns iterator)
 
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
 
const ll N=1001;
 
ll ara[N][N];
ll dp[N][N];
ll dp1[N][N];
bool vis[N][N];
bool vis1[N][N];
ll n,m;
 
bool valid(ll i, ll j)
{
    return i<=n && j<=m;
}
 
ll F(ll i, ll j)
{
    if(i==n && j==m)
    {
        return ara[i][j];
    }
 
    if(vis[i][j])
    {
        return dp[i][j];
    }
 
    ll ret=inf;
 
    if(valid(i,j+1))
    {
        ret=min(ret,F(i,j+1)+ara[i][j]);
    }
 
    if(valid(i+1,j))
    {
        ret=min(ret,F(i+1,j)+ara[i][j]);
    }
 
    vis[i][j]=1;
 
    return dp[i][j]=ret;
}
 
ll F1(ll i, ll j)
{
    if(i==n && j==m)
    {
        return ara[i][j];
    }
 
    if(vis1[i][j])
    {
        return dp1[i][j];
    }
 
    ll ret=ninf;
 
    if(valid(i,j+1))
    {
        ret=max(ret,F1(i,j+1)+ara[i][j]);
    }
 
    if(valid(i+1,j))
    {
        ret=max(ret,F1(i+1,j)+ara[i][j]);
    }
 
    vis1[i][j]=1;
 
    return dp1[i][j]=ret;
}
 
void solve()
{
    cin>>n>>m;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            cin>>ara[i][j];
            vis[i][j]=vis1[i][j]=0;
        }
    }
 
    ll minn=F(1,1);
    ll maxx=F1(1,1);
 
    // deb2(minn,maxx);
 
    if(minn>0 || maxx<0 || (n+m-1)%2==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
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