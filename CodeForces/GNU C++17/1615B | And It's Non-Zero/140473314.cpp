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
#define memo(x,val) memset(x,val,sizeof(x))
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
// debugging
 
#define deb(n) cout<<"--"<<(n)<<"--"<<endl
#define debx(x) cout << #x << " = " << (x) << endl
#define deb2(a,b) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<endl
#define deb3(a,b,c) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<#c<<" = "<<(c)<<endl
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
 
ll bits[200005][50];
 
void init()
{
    for(ll i=1; i<=200000; i++)
    {
        ll x=i;
        ll pos=0;
        while(x)
        {
            // if(i<=8) debx(x);
            if(x%2==1) bits[i][pos]++;
            pos++;
            x/=2;
        }
        // if(i<=8) {for(ll j=0; j<4; j++) cout<<bits[i][j]<<","; cout<<endl;}
    }
    for(ll i=1; i<=200000; i++)
    {
        for(ll j=0; j<30; j++)
        {
            bits[i][j]+=bits[i-1][j];
        }
    }
 
    // for(ll i=0; i<4; i++)
    // {
    //     deb2(i,bits[8][i]);
    // }
}
 
void solve()
{
    ll l,r; cin>>l>>r;
    ll len=0;
    
    ll x=r;
    while(x)
    {
        x/=2;
        len++;
    }
 
    ll ans=inf;
 
    for(ll i=0; i<len; i++)
    {
        ll zeros=(r-l+1)-(bits[r][i]-bits[l-1][i]);
        ans=min(ans,zeros);
        // debx(zeros);
    }
    cout<<ans<<endl;
}
 
int main()
{
    FAST
    init();
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}