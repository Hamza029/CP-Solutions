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

ll a[N],b[N],c[N];
ll dp[N][3];
ll n;
ll maxx=-1;
ll cnt=0;

ll F(ll i, ll f)
{
    // debx(sum);
    if(i>n)
    {
        // maxx=max(sum,maxx);
        // debx(sum);
        // cnt++;
        return 0;
    }

    if(dp[i][f]!=-1)
    {
        return dp[i][f];
    }

    vll v(6,0);

    if(f!=1)
    {
        v[0]=a[i]+F(i+1,1);
        v[1]=a[i]+F(i+1,1);
    }

    if(f!=2)
    {
        v[2]=b[i]+F(i+1,2);
        v[3]=b[i]+F(i+1,2);
    }

    if(f!=3)
    {
        v[4]=c[i]+F(i+1,3);
        v[5]=c[i]+F(i+1,3);
    }

    return dp[i][f]=MAX(v);
}

void solve()
{
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    memset(dp,-1,sizeof(dp));
    ll ans=F(1,0);
    // debx(ans);
    // debx(cnt);
    cout<<ans<<endl;
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