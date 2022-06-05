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

ll x_wins(const char& a, const char& b)
{
    // deb2(a,b);
    if(a=='G' && b=='C') return 1;
    if(a=='C' && b=='G') return 0;
    if(a=='P' && b=='G') return 1;
    if(a=='G' && b=='P') return 0;
    if(a=='C' && b=='P') return 1;
    if(a=='P' && b=='C') return 0;
    return -1;
}

ll cc[105];

bool cmp(ll a, ll b)
{
    if(cc[a]!=cc[b]) return cc[a]>cc[b];
    return a<b;
}

void solve()
{
    ll n,m; cin>>n>>m;
    char ara[2*n][m];
    vll v(2*n,0);
    for(ll i=0; i<2*n; i++)
    {
        v[i]=i;
        for(ll j=0; j<m; j++)
        {
            cin>>ara[i][j];
        }
    }
    memset(cc,0,sizeof(cc));
    for(ll c=0; c<m; c++)
    {
        // debv(v);
        for(ll i=0; i<2*n; i+=2)
        {
            ll x=v[i],y=v[i+1];
            // deb2(x,y);
            ll f=x_wins(ara[x][c],ara[y][c]);
            if(f==1)
            {
                cc[x]++;
            }
            else if(f==0)
            {
                cc[y]++;
            }
        }
        // vll vv=v;
        sort(all(v),cmp);
    }
    for(ll i=0; i<n*2; i++) cout<<v[i]+1<<endl;
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