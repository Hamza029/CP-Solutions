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
#define deb2(a,b) cout<<(a)<<"----"<<(b)<<endl
#define debv(v) for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
    ---- take notes here ----
    
*/
 
struct ud
{
    ll len;
    ll curr=0;
    vll vec;
};
 
bool cmp(ud a, ud b)
{
    return a.len>b.len;
}
 
void solve()
{
    ll n; cin>>n;
    vll a; a.pb(-1);
    set<ll> s,nai;
    vector<ud> v(n+1);
    ll b[n+5]={0};
    ll id=0;
    for(ll i=1; i<=n; i++)
    {
        ll val; cin>>val;
        a.pb(val);
        s.insert(val);
        v[val].vec.pb(i);
    }
    for(ll i=1; i<=n; i++)
    {
        if(!s.count(i))
        {
            nai.insert(i);
        }
        // cout<<i<<" = "; debv(v[i].vec);
        v[i].len=sz(v[i].vec);
    }
    sort(all(v),cmp);
    memset(b,0,sizeof(b));
    for(auto x: nai)
    {
        ll cul=v[id].vec[v[id].curr];
        if(cul==x) swap(v[id].vec[v[id].curr],v[id].vec[v[id].curr+1]);
        cul=v[id].vec[v[id].curr];
        // debx("ok");
        v[id].curr++;
        if(v[id].curr==v[id].len-1) id++;
        b[cul]=x;
    }
    ll tot=0;
    for(ll i=1; i<=n; i++)
    {
        if(b[i]==0) b[i]=a[i],tot++;
    }
    cout<<tot<<endl;
    for(ll i=1; i<=n; i++) cout<<b[i]<<" "; cout<<endl;
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