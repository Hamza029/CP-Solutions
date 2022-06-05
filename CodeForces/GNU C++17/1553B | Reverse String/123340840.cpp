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
 
ll n,n2;
 
vll fun(string s, string frst)
{
    vll v;
    for(ll i=0; i<n; i++)
    {
        if(frst[0]==s[i]) v.pb(i);
    }
    return v;
}
 
void solve()
{
    string s,s1,s2; cin>>s>>s2;
    n=sz(s);
    n2=sz(s2);
    // s1=s;
    // reverse(all(s1));
    // debx(n1);
    for(ll i=1; i<=n2; i++)
    {
        vll v;
        v=fun(s,s2);
        for(auto x: v)
        {
            ll start=x;
            ll j=start,k=0;
            ll cnt=0;
            while(j<n && k<i)
            {
                if(s[j]==s2[k]) j++,k++;
                else break;
            }
            // if(k!=i) break;
            j-=2;
            while(j>=0 && k<n2)
            {
                if(s[j]==s2[k]) j--,k++;
                else break;
            }
            // if(k==n2)cout<<endl;
            if(k==n2)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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