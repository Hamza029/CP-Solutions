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
#define debv(v) for(auto x: v) {cout<<x<<" ";} cout<<endl;
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
    vll v; readl(v,n);
    srt(v);
    ll id1=0,id2=0,maxx=inf;
    for(ll i=0; i<n-1; i++)
    {
        ll diff=abs(v[i]-v[i+1]);
        if(diff<maxx)
        {
            maxx=diff;
            id1=i;
            id2=i+1;
        }
    }
    swap(v[0],v[id1]);
    swap(v[n-1],v[id2]);
    sort(v.begin()+1,v.end()-1);
 
    /*set<ll> s;
    for(ll i=1; i<n-1; i++)
    {
     s.insert(v[i]);
    }*/
    //debv(s);
    ll last=v[0];
    //cout<<last<<" ";
    /*for(ll i=1; i<n-1; i++)
    {
     auto it=s.lower_bound(last);
     if(it==s.end()) it=s.begin();
     last=*it;
     s.erase(it);
     cout<<last<<" ";
    }*/
    auto it=lower_bound(v.begin()+1,v.end()-1,last);
    //debx(*it);
    auto it2=it;
    cout<<v[0]<<" ";
    while(it!=v.end()-1)
    {
     cout<<*it<<" ";
     it++;
    }
    it=v.begin()+1;
    while(it!=it2)
    {
     cout<<*it<<" ";
     it++;
    }
    cout<<v[n-1];
    cout<<endl;
    //cout<<v[n-1]<<endl;
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