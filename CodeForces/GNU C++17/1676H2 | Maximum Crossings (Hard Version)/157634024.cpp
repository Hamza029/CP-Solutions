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
 
// segment tree (1 indexing)
 
const ll N=200005;
ll tree[4*N];
 
// b=begin, e=end
void build(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node]=0;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    // modify this
    tree[node]=tree[left]+tree[right];
}
 
ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(b>e || i>e || j<b)
    {
        return 0;
    }
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(left,b,mid,i,j);
    ll p2=query(right,mid+1,e,i,j);
    return p1+p2;
}
 
void update(ll node, ll b, ll e, ll i, ll value)
{
    if(b>e || i>e || i<b)
    {
        return;
    }
    if(b==i && e==i)
    {
        tree[node]+=value;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node]=tree[left]+tree[right];
}
 
void solve()
{
    ll n; cin>>n;
    vll v(n+1);
 
    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
    }
 
    ll ans=0;
 
    build(1,1,n);
 
    for(ll i=1; i<=n; i++)
    {
        ll curr=query(1,1,n,v[i],n);
        // deb2(i,curr);
        ans+=curr;
        update(1,1,n,v[i],1);
    }
 
    cout<<ans<<endl;
}
 
int main()
{
    FAST
 
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);   
    #endif
 
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}