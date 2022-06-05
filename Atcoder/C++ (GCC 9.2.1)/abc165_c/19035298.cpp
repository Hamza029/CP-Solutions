#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define read(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define MIN(v) *min_element(v.begin(), v.end());
#define MAX(v) *max_element(v.begin(), v.end());
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define rep2(i, a, b) for(ll i = (a); i < (b); i++)
#define rep(i,n) for(int i=0; i<(n); i++)
#define vll vector <ll>
#define pii pair <int, int>
#define pll pair <ll, ll>
#define M 10000007
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define inf 1e18
#define ninf -1e18
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<8>(n).to_string()
#define toBinary(n) stoi(bitset<8>(n).to_string())
#define deb cout<<"....."<<endl



vector<string>all;

void solve(string s,long long n,long long m)
{
    int len=s.size();
    string p;
    if(len==n)all.push_back(s);
    else
    {
        for(int i=s[len-1]-'a'; i<m; i++)
        {
            p='a'+i;
            solve(s+p,n,m);
        }
    }
    return;
}

int main()
{
    long long n,m,q,ans,rans=0;
    string p;
    cin>>n>>m>>q;
    vector<int> a(q),b(q),c(q),d(q);
    rep(i,m)
    {
        p='a'+i;
        solve(p,n,m);
    }
    int l=all.size();
    rep(i,q)cin>>a[i]>>b[i]>>c[i]>>d[i];
    rep(i,l)
    {
        ans=0;


        rep(k,q)
        {
            if(all[i][b[k]-1]-all[i][a[k]-1]==c[k])ans+=d[k];
        }
        rans=max(rans,ans);
    }
    cout<<rans;
    return 0;
}








