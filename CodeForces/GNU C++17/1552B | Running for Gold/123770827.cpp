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
    ll id;
    vll vec;
};
 
bool cmp(const ud& a, const ud& b)
{
    ll aa=0;
    for(ll i=0; i<5; i++)
    {
        aa+=a.vec[i]<b.vec[i];
    }
    return aa>=3;
}
 
void solve()
{
    ll n; cin>>n;
    vector<ud> v;
    for(ll i=0; i<n; i++)
    {
        vll vec; readl(vec,5);
        v.pb({i+1,vec});
    }
    sort(all(v),cmp);
    // for(auto x: v)
    // {
    //     debx(x.id);
    // }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(ll i=1; i<n; i++)
    {
        ll cnt=0;
        for(ll j=0; j<5; j++)
        {
            // deb2(v[0].vec[j],v[i].vec[j]);
            if(v[0].vec[j]<v[i].vec[j])
            {
                cnt++;
            }
        }
        if(cnt<3)
        {
            cout<<-1<<endl;
            return;
        }
    }
    // debx(cnt);
    // if(cnt>=3)
    // {
        cout<<v[0].id<<endl;
    // }
    // else
    // {
    //     cout<<-1<<endl;
    // }
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