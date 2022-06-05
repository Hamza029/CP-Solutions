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

const ll N=100005;

ll ans[10];
ll dp[N][10];
ll ara[N];
ll n;

ll F(ll i, ll prev, ll f, ll val)
{
    // cout<<i<<", "<<prev<<", "<<val<<endl;
    if(i>n)
    {
        // debx(prev);
        return prev==val;
    }

    if(dp[i][prev]!=-1)
    {
        // debx(dp[i][prev]);
        return dp[i][prev];
    }

    ll jog=0,gun=0;

    jog+=F(i+1,(prev+ara[i])%10,0,val)%MOD;

    // dp[i][0]=jog;

    gun+=F(i+1,(prev*ara[i])%10,1,val)%MOD;

    // dp[i][1]=gun;

    return dp[i][prev]=(jog+gun)%MOD;
}

void solve()
{
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>ara[i];
    }
    // memset(dp,-1,sizeof(dp));
    // debx(F(2,ara[1],0,3));
    for(ll i=0; i<10; i++)
    {
        memset(dp,-1,sizeof(dp));
        // debx(dp[2][1]);
        cout<<F(2,ara[1],2,i)<<endl;
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