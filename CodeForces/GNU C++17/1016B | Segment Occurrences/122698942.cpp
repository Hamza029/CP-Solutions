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
 
void solve()
{
    ll n,m,q; cin>>n>>m>>q;
    string s; cin>>s;
    string s1; cin>>s1;
    ll pref[n+100];
    memset(pref,0,sizeof(pref));
    for(ll i=0; i<n-m+1; i++)
    {
        string sub=s.substr(i,m);
        if(sub==s1)
        {
            pref[i+1]++;
        }
        if(i>0) pref[i]+=pref[i-1];
    }
    for(ll i=n-m+1; i<n+50; i++) pref[i]+=pref[i-1];
    // for(ll i=0; i<n; i++) cout<<pref[i]<<""; cout<<endl;
    while(q--)
    {
        ll l,r; cin>>l>>r;
        // if(r>n) r=n;
        l--; r-=m-1;
        // deb2(l,r);
        if(r<l)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<pref[r]-pref[l]<<endl;
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