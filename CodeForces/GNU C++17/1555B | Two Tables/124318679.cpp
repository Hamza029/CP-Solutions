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
#define debv(v) for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(ll i=0; i<v.size(); i++) {cout<<i<<" = "<<v[i]<<endl;}
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
    ---- take notes here ----
    
*/
 
void solve()
{
    double w,h,x1,x2,y1,y2,w2,h2,w1,h1;
    // cin>>w>>h;
    // cin>>x1>>y1>>x2>>y2;
    // cin>>w2>>h2;
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&w,&h,&x1,&y1,&x2,&y2,&w2,&h2);
    w1=abs(x2-x1); h1=abs(y2-y1);
    // deb2(w1+w2,h1+h2);
    if(w1+w2>w && h1+h2>h)
    {
        // cout<<-1<<endl;
        printf("-1\n");
        return;
    }
    double up,down,left,right;
    double minn=1000000000.0;
    if(h1+h2<=h)
    {
        double extra;
        if(y1>=h2) down=0;
        else
        {
            down=h2-y1;
        }
        if(h-y2>=h2) up=0;
        else
        {
            extra=h-y2;
            up=(h2-extra);
        }
        // deb2(up,down);
        minn=min(up,down);
    }
    if(w1+w2<=w)
    {
        double extra;
        if(x1>=w2) left=0;
        else
        {
            left=w2-x1;
        }
        if(w-x2>=w2) right=0;
        else
        {
            extra=w-x2;
            right=(w2-extra);
            // deb2(w2,extra);
        }
        // deb2(left,right);
        minn=min(minn,min(left,right));
    }
    // cout<<minn<<endl;
    printf("%.6lf\n",minn);
}
 
int main()
{
    int t = 1;
    // cin >> t;
    scanf("%d",&t);
    while(t--)
    {
        solve();    
    }
 
    return 0;
}