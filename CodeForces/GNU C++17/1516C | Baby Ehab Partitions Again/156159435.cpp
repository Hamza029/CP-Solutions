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
 
ll n;
ll dp[100][200005];
vll v;
 
ll F(ll i, ll s)
{
    if(i>=n)
    {
        return s==0;
    }
 
    if(s==0)
    {
        return 1;
    }
 
    if(dp[i][s]!=-1)
    {
        return dp[i][s];
    }
 
    ll ret=0;
 
    if(s-v[i]>=0) ret|=F(i+1,s-v[i]);
    ret |=F(i+1,s);
 
    return dp[i][s]=ret;
}
 
void solve()
{
    cin>>n;
    readl(v,n);
 
 
    ll sum=0;
    for(auto x: v)
    {
        sum+=x;
    }
    // debx(sum/2);
    if(sum&1)
    {
        cout<<0<<endl;
        return;
    }
 
    memo(dp,-1);
 
 
 
    if(!F(0,sum/2))
    {
        cout<<0<<endl;
        return;
    }
    
    for(ll i=0; i<n; i++)
    {
        ll sum2=sum-v[i];
        if(sum2&1)
        {
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
 
        if(!F(0,sum2/2))
        {
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
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