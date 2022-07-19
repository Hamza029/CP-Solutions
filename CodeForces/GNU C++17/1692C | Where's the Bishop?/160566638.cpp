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
 
// const ll mx=100,my=100;
// ll level[mx+1][my+1];
ll row,col; // from input
ll ara[10][10];
 
// for horse movement in chess
// ll dx[]={-1,1,-1,1,-2,2,-2,2};
// ll dy[]={2,2,-2,-2,1,1,-1,-1};
 
// up-down-left-right in matrix
// ll dx[]={-1,1,0,0};
// ll dy[]={0,0,-1,1};
 
// corner movements in matrix
ll dx[]={-1,1,-1,1};
ll dy[]={1,-1,-1,1};
 
bool valid(ll x, ll y)
{
    return (x>=1&&x<=8&&y>=1&&y<=8);
}
 
void solve()
{
    // row=col=8;
    for(ll i=1; i<=8; i++)
    {
        for(ll j=1; j<=8; j++)
        {
            char c; cin>>c;
            if(c=='#') ara[i][j]=1;
            else ara[i][j]=0;
        }
    }
 
    for(ll i=1; i<=8; i++)
    {
        for(ll j=1; j<=8; j++)
        {
            if(ara[i][j]!=1) continue;
            ll c=0;
            for(ll k=0; k<4; k++)
            {
                ll x=i+dx[k];
                ll y=j+dy[k];
                if(valid(x,y))
                {
                    if(ara[x][y]==1)
                    {
                        c++;
                    }
                }
            }
 
            if(i==1||j==1||i==8||j==8)
            {
                if(c>=2)
                {
                    cout<<i<<" "<<j<<endl;
                    return;
                }
            }
            else if(c>=4)
            {
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
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