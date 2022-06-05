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
 
ll F(ll a, ll b, ll x, ll prev)
{
    ll aa=(a*(a+1))/2LL;
    ll bb=(b*(b+1))/2LL;
    ll m=(a+b)/2LL;
    ll mm=(m*(m+1))/2LL;
    // debx(m);
    // ll mm1=(m*(m-1))/2LL, mm2=((m+1)*(m+2))/2LL;
    if(mm==prev)
    {
        return m+1;
    }
    if(x==mm)
    {
        return m;
    }
    else if(x>mm)
    {
        return F(m,b,x,mm);
    }
    else if(x<mm)
    {
        return F(a,m,x,m);
    }
}
 
void solve()
{
    // ll val; cin>>val;
    // debx(F(1LL,(ll)1e9,val,-1));
    ll k,x; cin>>k>>x;
    ll total=(k*(k+1))/2LL+(k*(k-1))/2LL;
    if(total<=x)
    {
        cout<<(2*k-1)<<endl;
        return;
    }
    ll f=(k*(k+1))/2LL;
    if(x<=f)
    {
        ll ans=F(1LL,(ll)1e9,x,-1);
        cout<<ans<<endl;
        return;
    }
    x-=f;
    ll extra=(k*(k-1))/2LL;
    extra-=x;
    ll id=F(1LL,(ll)1e9,extra,-1);
    // debx(extra);
    // debx(id);
    ll tot=2*k-1-id;
    ll idsum=(id*(id+1))/2LL;
    if(extra<idsum) tot++;
    // debx(tot);
    cout<<tot<<endl;
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