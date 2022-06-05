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
 
// char chars[30];
 
void solve()
{
    string s; cin>>s;
    ll a=0;
    ll n=sz(s);
    while(a<n && s[a]!='a') a++;
    if(a>=n)
    {
        cout<<"NO"<<endl;
        return;
    }
    // debx(a);
    for(ll i=a-1; i>0; i--)
    {
        // if(i-1>)
        // debx(s[i]);
        // debx(s[i-1]);
        if(s[i]<s[i-1]) continue;
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(ll i=a+1; i<n-1; i++)
    {
        // debx(s[i]); debx(s[i+1]);
        if(s[i]<s[i+1]) continue;
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    map<ll,char> m;
    for(char x: s)
    {
        ll pos=x-'a'+1;
        if(pos>n)
        {
            cout<<"NO"<<endl;
            return;
        }
        m[x]++;
        if(m[x]>1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
 
int main()
{
    FAST
    // for(char ch='a'; ch<='z'; ch++)
    // {
    //     chars[ch-'a'+1]=ch;
    //     // debx(chars[ch-'a'+1]);
    // }
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}