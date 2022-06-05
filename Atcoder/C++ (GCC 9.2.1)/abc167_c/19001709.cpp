#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define read(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
#define rep(i, a, b) for(ll i = (a); i < (b); i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
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

int main()
{
    int a,b,h,m;
    cin >> a >> b >> h >> m;
 
    double sitah = (60*h+m)*acos(-1)/360;
    double sitam = m*acos(-1)/30;
 
    double xh = a*cos(sitah);
    double yh = a*sin(sitah);
    double xm = b*cos(sitam);
    double ym = b*sin(sitam);
    double dx = abs(xh - xm);
    double dy = abs(yh - ym);
    double ans = sqrt(dx*dx + dy*dy);
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}