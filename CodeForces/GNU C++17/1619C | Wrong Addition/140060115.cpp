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
 
bool test(string sa, string sb, string sc)
{
    string ret="";
    ll a=stoll(sa), b=stoll(sb);
    // deb2(a,b);
    while(a || b)
    {
        ll n=(a%10)+(b%10);
        ret=to_string(n)+ret;
        a/=10, b/=10;
    }
    // debx(ret);
    while(sc[0]=='0') sc.erase(0,1);
    while(ret[0]=='0') ret.erase(0,1);
    if(ret=="") ret="0";
    return sc==ret;
}
 
void solve()
{
    string a,s; cin>>a>>s;
    string b="";
 
    while(sz(a)<sz(s)) a='0'+a;
    while(sz(s)<sz(a)) s='0'+s;
 
    // deb2(s,a);
 
    ll na=sz(a), ns=sz(s);
 
    ll i=ns-1,j=na-1;
    ll n=0;
 
    while(i>=0 && j>=0)
    {
        ll digs=s[i]-'0';
        ll diga=a[j]-'0';
 
 
        if(digs<diga)
        {
            if(i-1<0)
            {
                cout<<-1<<endl;
                return;
            }
            i--;
            digs=10*(s[i]-'0')+digs;
            if(digs<diga||digs-diga>9)
            {
                cout<<-1<<endl;
                // deb2(digs,diga);
                return;
            }
            char digb=(digs-diga)+'0';
            b=digb+b;
        }
        else
        {
            char digb=(digs-diga)+'0';
            b=digb+b;
        }
 
        // debx(b);
 
        i--;
        j--;
    }
 
    // deb2(i,j);
 
    // if(i<0 && j<0)
    // {
    //     cout<<b<<endl;
    // }
    // else
    // {
    //     cout<<-1<<endl;
    // }
 
    if(b=="" || !test(a,b,s))
    {
        cout<<-1<<endl;
        return;
    }
 
    ll ans=stoll(b);
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