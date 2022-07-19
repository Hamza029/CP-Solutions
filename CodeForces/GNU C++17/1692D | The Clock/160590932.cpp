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
 
bool isPal(ll hr, ll mn)
{
    // return s[0]==s[4] && s[1]==s[3];
    return (hr%10 == (mn/10)%10 && (hr/10)%10 == mn%10);
}
 
ll getHr(const string& s)
{
    ll n=s[0]-'0';
    n*=10;
    n+=s[1]-'0';
    return n;
}
 
ll getMn(const string& s)
{
    ll n=s[3]-'0';
    n*=10;
    n+=s[4]-'0';
    return n;
}
 
void solve()
{
    string s; cin>>s;
    ll x; cin>>x;
    string s1=s;
 
    ll ans=0;
    bool f=0;
 
    ll HR=getHr(s);
    ll MN=getMn(s);
    ll hr=HR;
    ll mn=MN;
 
    while(1)
    {
        // debx(s1);
        // deb2(hr,mn);
        if(f && HR==hr && MN==mn) break;
        f=1;
 
        ans+=isPal(hr,mn);
 
        mn+=x;
        // deb2(hr,mn);
 
        ll ehr = mn/60;
        mn%=60;
 
        hr+=ehr;
        hr%=24;
 
        // s1=to_string(hr)+":"+to_string(mn);
    }
 
    cout<<ans<<endl;
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