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
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
    ---- take notes here ----
    
*/
 
void solve()
{
    string x1,x2;
    ll p1,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    ll d1=sz(x1);
    ll d2=sz(x2);
    if(d1+p1>d2+p2)
    {
        cout<<">"<<endl;
        return;
    }
    if(d1+p1<d2+p2)
    {
        cout<<"<"<<endl;
        return;
    }
    for(ll i=0; i<min(sz(x1),sz(x2)); i++)
    {
        if(x1[i]<x2[i])
        {
            cout<<"<"<<endl;
            return;
        }
        if(x1[i]>x2[i])
        {
            cout<<">"<<endl;
            return;
        }
    }
    if(d1>d2)
    {
        for(ll i=sz(x2); i<sz(x1); i++)
        {
            if(x1[i]-'0'>0)
            {
                cout<<">"<<endl;
                return;
            }
        }
        cout<<"="<<endl;
    }
    else if(d1<d2)
    {
        for(ll i=sz(x1); i<sz(x2); i++)
        {
            if(x2[i]-'0'>0)
            {
                cout<<"<"<<endl;
                return;
            }
        }
        cout<<"="<<endl;
    }
    else
    {
        cout<<"="<<endl;
    }
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