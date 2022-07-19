#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
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
 
// PBDS
 
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using multi_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using r_ordered_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T> using r_multi_ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// ordered_set<ll> s;
// s.order_of_key(k); --> number of items strictly smaller than k
// s.find_by_order(k); --> k-th item in set (0-indexing) (returns iterator)
 
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
    vll child(n+1,0);
 
    for(ll i=1; i<=n-1; i++)
    {
        ll p; cin>>p;
        child[p-1]++;
    }
 
    queue<ll> q1,q2;
 
    child[n]=1;
 
    rsrt(child);
    //debv(child);
 
    ll ans=0;
 
    for(ll i=0; i<=n; i++)
    {
        if(child[i]>0)
        {
            q1.push(i);
        }
    }
 
    while(!q1.empty())
    {
        ll u=q1.front();
        q1.pop();
        child[u]--;
 
        ll len=sz(q2);
 
        while(len--)
        {
            ll v=q2.front();
            q2.pop();
            child[v]--;
            if(child[v]>0)
            {
                q2.push(v);
            }
        }
 
        if(child[u]>0)
        {
            q2.push(u);
        }
 
        ans++;
    }
 
    ll c=0,nodes=sz(q2)+1;
 
    while(!q2.empty())
    {
        ll len=sz(q2);
        ll maxChild=0;
        ll node=-1;
        vll v;
 
        while(len--)
        {
            ll u=q2.front();
            q2.pop();
            child[u]--;
            if(child[u]>maxChild)
            {
                maxChild=child[u];
                node=u;
            }
            if(child[u]>0)
            {
                v.pb(u);
            }
        }
 
        if(node!=-1)
        {
            child[node]--;
        }
        for(auto x: v)
        {
            if(child[x]>0)
            {
                q2.push(x);
            }
        }
 
        ans++;
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