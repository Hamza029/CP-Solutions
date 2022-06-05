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
    ll n,m; cin>>n>>m;
    vll v[n];
    vll pos[n];
 
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ll val; cin>>val;
            v[i].pb(val);
        }
    }
 
    ll mark[n][m];
    memo(mark,0);
 
    // for(ll i=0; i<n; i++)
    // {
    //     debv(v[i]);
    // }
 
    bool allOk=1;
 
    for(ll i=0; i<n; i++)
    {
        vll v1=v[i];
        srt(v1);
 
        ll c=0;
 
        for(ll j=0; j<m; j++)
        {
            if(v[i][j]!=v1[j])
            {
                mark[i][j]=1;
                pos[i].pb(j);
                allOk=0;
                c++;
            }
        }
 
        if(c>2)
        {
            cout<<-1<<endl;
            return;
        }
    }
 
    if(allOk)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
 
    for(ll i=0; i<n; i++)
    {
        if(sz(pos[i]))
        {
            bool ok=1;
            ll x=pos[i][0], y=pos[i][1];
 
 
            for(ll j=0; j<n; j++)
            {
                if(sz(pos[j]))
                {
                    if(pos[j][0]!=x || pos[j][1]!=y)
                    {
                        cout<<-1<<endl;
                        return;
                    }
                }
                else
                {
                    if(v[j][x]!=v[j][y])
                    {
                        cout<<-1<<endl;
                        return;
                    }
                }
            }
 
            cout<<x+1<<" "<<y+1<<endl;
            return;
        }
    }
 
 
 
 
 
 
    // deb("------------");
}
 
int main()
{
    FAST
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}