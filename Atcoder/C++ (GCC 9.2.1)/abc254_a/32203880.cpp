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

const ll N=1005;
const ll M1=5005;

ll dp[N][M1];
ll n,m,k;

void solve()
{
    cin>>n>>m>>k;

    for(ll i=1; i<=m; i++)
    {
        dp[1][i]=1;
        dp[1][i]+=dp[1][i-1];
    }

    for(ll i=2; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            // for(ll jj=1; jj<=j-k; jj++)
            // {
            //     dp[i][j]+=dp[i-1][jj];
            //     dp[i][j]%=MOD;
            // }
            // for(ll jj=j+k; jj<=m; jj++)
            // {
            //     dp[i][j]+=dp[i-1][jj];
            //     dp[i][j]%=MOD;
            // }

            ll L,R;

            L=1,R=j-k;
            // deb2(L,R);

            if(R>=L)
            {
                dp[i][j]+=(dp[i-1][R]-dp[i-1][L-1]+MOD);
                dp[i][j]%=MOD;
            }

            L=j+k,R=m;

            if(R>=L)
            {
                if(!k) L++;
                dp[i][j]+=(dp[i-1][R]-dp[i-1][L-1]+MOD);
                dp[i][j]%=MOD;
            }

            // deb3(i,j,dp[i][j]);
            // deb3(j-k,j+k,m);
        }

        for(ll j=1; j<=m; j++)
        {
            dp[i][j]+=dp[i][j-1];
            dp[i][j]%=MOD;
        }
    }

    ll ans=dp[n][m];

    // debx(ans);

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