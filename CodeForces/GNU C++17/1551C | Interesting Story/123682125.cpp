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
#define debv(v) for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(ll i=0; i<v.size(); i++) {cout<<i<<" = "<<v[i]<<endl;}
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
    ---- take notes here ----
    
*/
 
struct ud
{
    ll len=0;
    map<char,ll> m;
};
 
char chh='a';
ll n,tott;
ll oc;
 
bool cmp(ud a, ud b)
{
    
}
 
ll solve2(char ch, vector<ud> v)
{
    vll vv;
    ll pref[n+5]={0};
    for(auto x: v)
    {
        ll baki=x.len-x.m[ch];
        ll diff=x.m[ch]-baki;
        vv.pb(diff);
    }
    rsrt(vv);
    // debv(vv);
    pref[0]=vv[0];
    for(ll i=1; i<n; i++)
    {
        pref[i]+=pref[i-1]+vv[i];
    }
    // for(ll i=0; i<n; i++)
    // {
    //     cout<<pref[i]<<", ";
    // };
    // cout<<endl;
    ll tot=0;
    for(ll i=0; i<n; i++)
    {
        if(pref[i]>0) tot++;
        else break;
    }
    return tot;
}
 
void solve()
{
    cin>>n;
    vector<ud> v;
    for(ll i=0; i<n; i++)
    {
        string s; cin>>s;
        map<char,ll> mapp;
        for(char x: s) mapp[x]++;
        v.pb({sz(s),mapp});
    }
    ll ans=0;
    for(char i='a'; i<='e'; i++)
    {
        ans=max(ans,solve2(i,v));
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