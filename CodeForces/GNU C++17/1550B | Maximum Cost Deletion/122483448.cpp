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
#define deb2(a,b) cout<<(a)<<" ~ "<<(b)<<endl
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
    ll n,a,b; cin>>n>>a>>b;
    string s; cin>>s;
    ll cnt=0;
    char prev='x';
    vll v;
    for(char x: s)
    {
        if(prev=='x') cnt++;
        else if(prev!=x)
        {
            v.pb(cnt);
            cnt=1;
        }
        else
        {
            cnt++;
        }
        prev=x;
    }
    if(cnt>0) v.pb(cnt);
    // debv(v);
    ll ans1=0,ans2=0;
    ll len=sz(v);
    if(len%2==1)
    {
        ll mid=len/2;
        ans1+=(a*v[mid]+b);
        vll v1,v2;
        for(ll i=0,j=len-1; i<mid; i++,j--)
        {
            ans1+=(a*(v[i]+v[j])+b);
            // deb2(i,j);
        }
    }
    else
    {
        ll mid=len/2;
        // debx(v[mid]);
        ll an1=(a*v[mid]+b),an2=(a*v[mid-1]+b);
        an1+=(a*v[0]+b); an2+=(a*v[len-1]+b);
        for(ll i=1,j=len-1; i<mid && j>=0; i++,j--)
        {
            an1+=(a*(v[i]+v[j])+b);
            // deb2(i,j);
        }
        for(ll i=0,j=len-2; i<mid-1 && j>=0; i++,j--)
        {
            an2+=(a*(v[i]+v[j])+b);
            // deb2(i,j);
        }
        // debx(an1); debx(an2);
        ans1=max(an1,an2);
    }
    ll jog=a+b;
    ans2=jog*n;
    cout<<max(ans1,ans2)<<endl;
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