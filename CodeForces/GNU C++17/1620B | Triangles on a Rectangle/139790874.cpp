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
 
void solve()
{
    ll w,h; cin>>w>>h;
    // vll vx1,vx2,vy1,vy2;
    ll mx1=0,mx2=0,my1=0,my2=0;
    ll mnx1=inf,mnx2=inf,mny1=inf,mny2=inf;
    ll k; cin>>k;
    while(k--)
    {
        ll val; cin>>val;
        // vx1.pb(val);
        mx1=max(mx1,val);
        mnx1=min(mnx1,val);
    }
    cin>>k;
    while(k--)
    {
        ll val; cin>>val;
        // vx2.pb(val);
        mx2=max(mx2,val);
        mnx2=min(mnx2,val);
    }
    cin>>k;
    while(k--)
    {
        ll val; cin>>val;
        // vy1.pb(val);
        my1=max(my1,val);
        mny1=min(mny1,val);
    }
    cin>>k;
    while(k--)
    {
        ll val; cin>>val;
        // vy2.pb(val);
        my2=max(my2,val);
        mny2=min(mny2,val);
    }
 
    // srt(vx1); srt(vx2); srt(vx3); srt(vx4);
 
    ll x1=mx1-mnx1;
    ll x2=mx2-mnx2;
 
    ll y1=my1-mny1;
    ll y2=my2-mny2;
 
    // deb2(x1,x2);
    // deb2(y1,y2);
 
    // debm(mx1,mx2,my1,my2);
    // debm(mnx1,mnx2,mny1,mny2);
 
    ll ans=0;
 
    ll area;
 
    area=max(x1*h,x2*h);
    ans=max(ans,area);
 
    area=max(y1*w,y2*w);
    ans=max(ans,area);
 
    // debx(ans);
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