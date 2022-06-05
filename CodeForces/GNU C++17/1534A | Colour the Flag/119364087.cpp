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
 
ll row,col;
char graph[55][55];
bool vis[55][55];
 
ll x1[]={-2,2,0,0};
ll y1[]={0,0,-2,2};
ll dx[]={-1,1,0,0};
ll dy[]={0,0,-1,1};
bool f=1;
 
bool valid(ll x, ll y)
{
    return x>=0 && x<row && y>=0 && y<col;
}
 
void dfs(ll x, ll y)
{
    vis[x][y]=1;
    for(ll i=0; i<4; i++)
    {
        ll xx=x+dx[i];
        ll yy=y+dy[i];
        //deb2(xx,yy);
        if(valid(xx,yy) && graph[xx][yy]=='.')
        {
            /*if(graph[x][y]==graph[xx][yy] && graph[xx][yy]!='.')
            {
                f=0;
                //deb2(x,y); deb2(xx,yy);
                return;
            }*/
            //else
            //{
                if(graph[x][y]=='R') graph[xx][yy]='W';
                else graph[xx][yy]='R';
                dfs(xx,yy);
            //}
        }
    }
}
 
void solve()
{
    f=1;
    cin>>row>>col;
    for(ll i=0; i<row; i++)
    {
        for(ll j=0; j<col; j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]!='.') f=0;
        }
    }
    if(f) graph[0][0]='R';
    memset(vis,0,sizeof(vis));
    for(ll i=0; i<row; i++)
    {
        for(ll j=0; j<col; j++)
        {
            if(graph[i][j]!='.' && !vis[i][j]);
            {
                if(graph[i][j]=='.') continue;
                dfs(i,j);
            }
        }
    }
    for(ll i=0; i<row; i++)
    {
        for(ll j=0; j<col; j++)
        {
            for(ll k=0; k<4; k++)
            {
                ll ii=i+dx[k];
                ll jj=j+dy[k];
                if(valid(ii,jj) && graph[i][j]==graph[ii][jj])
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    //if(!f) {cout<<"NO"<<endl;}
    //else
    //{
        cout<<"YES"<<endl;
        for(ll i=0; i<row; i++)
        {
            for(ll j=0; j<col; j++)
            {
                cout<<graph[i][j];
            }
            cout<<endl;
        }
    //}
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