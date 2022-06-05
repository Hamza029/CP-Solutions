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
 
ll n,m;
ll dx[]={1,-1,0,0,1,-1,1,-1};
ll dy[]={0,0,-1,1,1,-1,-1,1};
 
bool valid(ll x, ll y)
{
    return x<n && y<m && x>=0 && y>=0;
}
 
void solve()
{
    cin>>n>>m;
    bool ar[n][m];
    memset(ar,0,sizeof(ar));
    for(ll i=0; i<m; i+=2)
    {
        ar[0][i]=1;
    }
    for(ll i=0; i<m; i+=2)
    {
        ar[n-1][i]=1;
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(i==0||j==0||i==n-1||j==m-1)
            {
                bool f=1;
                for(ll k=0; k<8; k++)
                {
                    ll ii=i+dx[k];
                    ll jj=j+dy[k];
                    if(valid(ii,jj) && ar[ii][jj]) f=0;
                }
                if(f) ar[i][j]=1;
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cout<<ar[i][j];
        }
        cout<<endl;
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