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
 
void solve()
{
    ll n; cin>>n;
    string s,t; cin>>s>>t;
 
 
    // stack<ll> a,b,c;
    map<char,stack<ll>> m;
 
    for(ll i=0; i<n; i++)
    {
        m[s[i]].push(i);
    }
 
 
    for(ll i=n-1; i>=0; i--)
    {
        // deb2(i,s);
        // deb3(sz(m['a']),sz(m['b']),sz(m['c']));
        if((t[i]=='b' && s[i]=='a') || (t[i]=='c' && s[i]=='b') ||
            (t[i]=='c' && s[i]=='a') || (t[i]=='a' && s[i]=='c'))
        {
            cout<<"NO"<<endl;
            return;
        }
 
        m[s[i]].pop();
        // deb2(s[i],sz(m[s[i]]));
        if(t[i]==s[i])
        {
            // m[s[i]].pop();
            continue;
        }
 
 
        if(s[i]=='b') // a banaite hobe
        {
            if(m['c'].empty() && !m['a'].empty())
            {
                swap(s[i],s[m['a'].top()]);
                m['a'].pop();
                m['b'].push(i);
                continue;
            }
            else if(m['a'].empty())
            {
                cout<<"NO"<<endl;
                return;
            }
            else if(m['a'].top()<m['c'].top())
            {
                cout<<"NO"<<endl;
                return;
            }
            // debx(sz(m['c']));
            swap(s[i],s[m['a'].top()]);
            m['a'].pop();
            m['b'].push(i);
        }
 
 
 
 
        if(s[i]=='c') // b banaite hobe
        {
            if(m['a'].empty() && !m['b'].empty())
            {
                swap(s[i],s[m['b'].top()]);
                m['b'].pop();
                m['c'].push(i);
                continue;
            }
            else if(m['b'].empty())
            {
                cout<<"NO"<<endl;
                return;
            }
            else if(m['b'].top()<m['a'].top())
            {
                cout<<"NO"<<endl;
                return;
            }
            swap(s[i],s[m['b'].top()]);
            m['b'].pop();
            m['c'].push(i);
        }
    }
 
    cout<<"YES"<<endl;
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