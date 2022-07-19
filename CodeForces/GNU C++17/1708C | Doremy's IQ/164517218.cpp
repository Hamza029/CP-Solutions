/*
 *  Author: 2BrainCells
 *  Created on: [2022-07-16]    
*/
 
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
    ll n,k; cin>>n>>k;
 
    vll v; readl(v,n);
 
    ll c=0;
    string ans(n,'0');
    // vll pref(n,0);
 
    for(ll i=0; i<n; i++)
    {
        if(v[i]<=k)
        {
            ans[i]='1';
            c++;
        }
        else
        {
            ans[i]='0';
            // pref[i]=1;
        }
    }
 
    // for(ll i=n-2; i>=0; i--)
    // {
    //     pref[i]+=pref[i+1];
    // }
 
    // debv(pref);
 
    ll lo=c, hi=n;
 
    // debx(c);
 
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
 
        ll cc=c;
        ll extra=mid-c;
        extra=max(extra,0LL);
        ll kk=k;
        ll cnt=0;
 
        // debx(extra);
 
        string tmp=ans;
 
        ll here=inf;
 
        if(extra>0)
        {
            ll etmp=extra;
 
            for(ll i=n-1; i>=0; i--)
            {
                if(etmp>0 && v[i]>k)
                {
                    etmp--;
                }
                if(etmp==0)
                {
                    here=i;
                    break;
                }
            }
        }
 
 
        for(ll i=0; i<n; i++)
        {
            if(v[i]<=kk)
            {
                cnt++;
                tmp[i]='1';
            }
            else if(v[i]>kk && i>=here && kk>0)
            {
                cnt++;
                kk--;
                tmp[i]='1';
            }
            else
            {
                tmp[i]='0';
            }
        }
 
        // deb3(mid,cnt,tmp);
 
 
        if(cnt>=mid)
        {
            lo=mid+1;
            ans=tmp;
        }
        else
        {
            hi=mid-1;
        }
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