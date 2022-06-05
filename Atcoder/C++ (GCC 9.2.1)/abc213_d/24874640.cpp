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

struct ud
{
    ll x;
    ll y;
    ll px;
    ll py;
    ll id;
};

bool cmp1(const ud& a, const ud& b)
{
    return a.x<b.x;
}

bool cmp2(const ud& a, const ud& b)
{
    return a.y<b.y;
}

bool cmp3(const ud& a, const ud& b)
{
    return a.id<b.id;
}

void solve()
{
    ll h,w,n; cin>>h>>w>>n;
    vector<ud> v;
    for(ll i=1; i<=n; i++)
    {
        ll a,b; cin>>a>>b;
        v.pb({a,b,a,b,i});
    }
    sort(all(v),cmp1);
    v[0].x=min(v[0].x,1LL);
    for(ll i=1; i<n; i++)
    {
        if(v[i].x==v[i-1].px)
        {
            v[i].x=v[i-1].x;
        }
        else
        {
            v[i].x=v[i-1].x+1;
        }
    }
    sort(all(v),cmp2);
    v[0].y=min(v[0].y,1LL);
    for(ll i=1; i<n; i++)
    {
        if(v[i].y==v[i-1].py)
        {
            v[i].y=v[i-1].y;
        }
        else
        {
            v[i].y=v[i-1].y+1;
        }
    }
    // for(auto el: v) deb2(el.x,el.y);
    sort(all(v),cmp3);
    for(ll i=0; i<n; i++)
    {
        // deb2(v[i].px,v[i].py);
        // debx(v[i].id);
        cout<<v[i].x<<" "<<v[i].y<<endl;
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