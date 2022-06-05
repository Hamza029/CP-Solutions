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
 
const ll N=100005;
 
ll dp[N];
ll k,q;
 
// ll F(ll i)
// {
//     if(i==0)
//     {
//         // debx(i);
//         return 1;
//     }
//     if(dp[i]!=-1)
//     {
//         return dp[i];
//     }
//     ll ret=0;
//     if(i-k>=0)
//     {
//         ret+=F(i-k)%MOD;
//         ret%=MOD;
//     }
//     if(i-1>=0)
//     {
//         ret+=F(i-1)%MOD;
//         ret%=MOD;
//     }
//     return dp[i]=ret;
// }
 
void solve()
{
    cin>>q>>k;
    memset(dp,0,sizeof(dp));
    for(ll i=0; i<k; i++)
    {
        dp[i]=1;
    }
    for(ll i=k; i<=100000; i++)
    {
        dp[i]+=(dp[i-1]+dp[i-k])%MOD;
    }
    vll pref(N,0);
    for(ll i=1; i<=100000; i++)
    {
        pref[i]=(pref[i-1]+dp[i])%MOD;
        pref[i]%=MOD;
    }
    // for(ll i=1; i<=4; i++) debx(dp[i]);
    while(q--)
    {
        ll a,b; cin>>a>>b;
        cout<<(pref[b]+MOD-pref[a-1])%MOD<<endl;
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