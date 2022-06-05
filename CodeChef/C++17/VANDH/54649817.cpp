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
#define debv(v) cout<<#v<<" = "; for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(int i=0; i<v.size(); i++) {cout<<#v<<"["<<i<<"] = "<<v[i]<<endl;}
#define memo(x,val) memset(x,val,sizeof(x))
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())

/*
    ---- take notes here ----
    
*/

ll getCnt(string s)
{
    ll hills=0,valley=0;
    for(ll i=1; i<sz(s)-1; i++)
    {
        if(s[i]>s[i-1] && s[i]>s[i+1]) hills++;
        else if(s[i]<s[i-1] && s[i]<s[i+1]) valley++;
    }
    deb2(hills,valley);
}

void solve()
{
    ll n,m; cin>>n>>m;
    string s="";
    if(n==m)
    {
        for(ll i=1; i<=n+1; i++)
        {
            s+="01";
        }
    }
    else if(n>m)
    {
        s+="0";
        for(ll i=1; i<=m+1; i++)
        {
            s+="10";
        }
        for(ll i=m+2; i<=n; i++)
        {
            s+="010";
        }
    }
    else
    {
        s+="1";
        for(ll i=1; i<=n+1; i++)
        {
            s+="01";
        }
        for(ll i=n+2; i<=m; i++)
        {
            s+="101";
        }
    }
    cout<<sz(s)<<endl;
    cout<<s<<endl;
    // getCnt(s);
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