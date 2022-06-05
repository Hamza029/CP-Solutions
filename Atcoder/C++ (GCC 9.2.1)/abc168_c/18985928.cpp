#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define read(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define MIN(v) *min_element(v.begin(), v.end());
#define MAX(v) *max_element(v.begin(), v.end());
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(ll i = (a); i < (b); i++)
#define vll vector <ll>
#define pii pair <int, int>
#define pll pair <ll, ll>
#define M 10000007
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define inf 1e18
#define ninf -1e18
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<8>(n).to_string()
#define toBinary(n) stoi(bitset<8>(n).to_string())

void solve()
{
    int n,m, x; cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n,vector<int>(m));
    rep(i,0,n)
    {
        cin >> c[i];
        rep(j,0,m) cin >> a[i][j];
    }
    ll ans = inf;
    rep(i,0,(1 << n))
    {
        bitset<12> s(i);
        vector<ll> un(m);
        ll sum = 0;
        rep(j,0,n)
        {
            if(s.test(j))
            {
                sum += c[j];
                rep(k,0,m) un[k] += a[j][k];
            }
        }
        bool ok = true;
        rep(j,0,m) if(un[j] < x) ok = false;
        if(ok)
        {
            ans = min(ans,sum);
        }
    }
    if(ans != inf) cout << ans << endl;
    else cout << -1 << endl;
}

int main()
{
    solve();
}