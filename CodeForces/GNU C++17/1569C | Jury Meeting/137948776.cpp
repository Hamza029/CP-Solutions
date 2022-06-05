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
#define MOD 998244353
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
 
ll F[1000000+5];
 
ll powerMod(ll a, ll n, ll p)
{
    // a=base, n=power, p=some prime number
    ll ret=1;
    while(n)
    {
        if(n%2!=0)
        {
            ret=(ret*a)%p;
            n--;
        }
        else
        {
            a=(a*a)%p;
            n/=2;
        }
    }
    return ret;
}
 
void calcFact(ll n)
{
    F[0]=F[1]=1;
    for(ll i=2; i<=n; i++)
    {
        F[i]=(F[i-1]*i)%MOD;
    }
}
 
void solve()
{
    ll n; cin>>n;
    map<ll,ll> m;
    for(ll i=0; i<n; i++)
    {
        ll val; cin>>val;
        m[-val]++;
    }
    if(sz(m)==1)
    {
        cout<<F[n]<<endl;
        return;
    }
    auto it=m.begin();
    if(it->ss>1)
    {
        cout<<F[n]<<endl;
        return;
    }
    ll m1=-it->ff;
    it++;
    ll m2=-it->ff;
    // deb2(m1,m2);
    if(m1!=m2+1)
    {
        cout<<0<<endl;
        return;
    }
    // ans+=MOD;
    ll e=n-1-it->ss;
    ll x=it->ss;
    ll ans=(F[n]-(F[n]*powerMod(x+1,MOD-2,MOD))%MOD+MOD)%MOD;
    // debx(ans);
    cout<<ans<<endl;
}
 
int main()
{
    FAST;
    calcFact(200001);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}