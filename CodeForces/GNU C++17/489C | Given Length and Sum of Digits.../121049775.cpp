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
 
bool possible(ll dig, ll sum)
{
    ll minn=1;
    // ll tmp=dig-1;
    // while(tmp) minn*=10,tmp--;
    ll maxx=dig*9;
    // deb2(maxx,minn);
    if(sum<minn || sum>maxx) return 0;
    return 1;
}
 
void solve()
{
    ll m,s; cin>>m>>s;
    ll poss=possible(m,s);
    if(m==1 && s==0)
    {
        cout<<"0 0"<<endl;
        return;
    }
    if(!poss)
    {
        cout<<"-1 -1"<<endl;
        return;
    }
    string maxx="";
    ll sum=s;
    ll dig=m;
    while(dig--)
    {
        if(sum>=9)
        {
            maxx+="9";
            sum-=9;
        }
        else
        {
            maxx+=to_string(sum);
            sum=0;
        }
    }
    string minn=maxx;
    reverse(all(minn));
    if(minn[0]=='0')
    {
        ll non_zero=0;
        while(non_zero<m && minn[non_zero]=='0') non_zero++;
        minn[non_zero]=minn[non_zero]-1;
        minn[0]='1';
    }
    // debx(maxx);
    cout<<minn<<" "<<maxx<<endl;
}
 
int main()
{
    FAST
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}