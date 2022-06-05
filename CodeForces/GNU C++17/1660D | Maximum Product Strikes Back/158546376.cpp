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
 
struct ud
{
    ll left;
    ll right;
    ll twos;
};
 
ud get(const vll& v, ll x, ll y)
{
    ll t=0;
    ll c=0;
    for(ll i=x; i<=y; i++)
    {
        if(abs(v[i])==2)
        {
            t++;
        }
        if(v[i]<0)
        {
            c++;
        }
    }
    if(c%2==0)
    {
        return {0,0,t};
    }
    ll t1=t, t2=t;
    ll c1=0,c2=0;
    for(ll i=x; i<=y; i++)
    {
        c1++;
        if(abs(v[i])==2) t1--;
        if(v[i]<0) break;
    }
    for(ll i=y; i>=x; i--)
    {
        c2++;
        if(abs(v[i])==2) t2--;
        if(v[i]<0) break;
    }
 
    // deb2(t1,t2);
 
    if(t1>t2)
    {
        return {c1,0,t1};
    }
    return {0,c2,t2};
}
 
void solve()
{
    ll n; cin>>n;
    vll v; readl(v,n);
 
    bool f=0;
 
    for(auto x: v)
    {
        if(x!=0)
        {
            f=1;
            break;
        }
    }
 
    if(!f)
    {
        cout<<n<<" "<<0<<endl;
        return;
    }
 
    ll prev=0;
    while(prev<n && v[prev]==0)
    {
        prev++;
    }
 
    ll t=0;
    ll L=n,R=0;
 
    vector<pll> vec;
 
    for(ll i=prev; i<=n; i++)
    {
        if(i==n || v[i]==0)
        {
            vec.pb({prev,i-1});
            while(i<n && v[i]==0)
            {
                i++;
            }
            prev=i;
        }
    }
 
    for(auto x: vec)
    {
        // deb2(x.ff,x.ss);
        ud tmp=get(v,x.ff,x.ss);
        // deb3(tmp.left,tmp.right,tmp.twos);
        if(tmp.twos>t)
        {
            L=x.ff+tmp.left;
            R=(n-x.ss-1)+tmp.right;
            t=tmp.twos;
        }
    }
 
    // cout<<ans<<endl;
    cout<<L<<" "<<R<<endl;
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