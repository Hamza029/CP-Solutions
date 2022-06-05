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
    ll n; cin>>n;
    ll bad=n/4;
    // debx(bad);
    vll v1,v2; ll s1=0,s2=0;
    for(ll i=0; i<n; i++)
    {
        ll val; cin>>val;
        v1.pb(val);
        s1+=val;
    }
    for(ll i=0; i<n; i++)
    {
        ll val; cin>>val;
        v2.pb(val);
        s2+=val;
    }
    srt(v1); srt(v2);
    vll ex;
    for(ll i=0; i<bad; i++)
    {
        s1-=v1[i];
        s2-=v2[i];
        // ex+=v2[i];
        ex.pb(v2[i]);
    }
    if(s1>=s2)
    {
        cout<<0<<endl;
        return;
    }
    // deb2(s1,s2);
    reverse(all(ex));
    ll len=sz(ex);
    ll i=0,m=n,j=bad;
    while(s2>s1)
    {
        m++;
        ll tmp=m/4;
        if(tmp!=bad && m%4==0)
        {
            if(j<n) s1-=v1[j],j++;
            else s1-=100;
            // deb("ok");
        }
        else if(i<len)
        {
            s2+=ex[i];
            i++;
        }
        s1+=100;
        // if(i<len) s2+=ex[i],i++;
        // deb2(s1,s2);
    }
    cout<<m-n<<endl;
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