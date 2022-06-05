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
#define rep(i, a, b) for(ll i = (a); i < (b); i++)
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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vll move(n+10);
    vll pre(n+10, -1);
    rep(i,0,n) { cin >> move[i]; }
    rep(i,0,n) move[i]--;
    int next_p = move[0];
    int now_day = 1;
    pre[0] = 0;
    while(true)
    {
        if(now_day == k)
        {
            cout << next_p + 1 << endl;
            return;
        }
        if(pre[next_p] != -1)
        {
            ll period = now_day - pre[next_p] ;
            ll first_visit = pre[next_p];
            ll cnt = k - first_visit;
            cnt %= period;
            int ans = next_p;
            while(cnt)
            {
                ans = move[ans];
                cnt--;
            }
            cout << ans + 1 << endl;
            return;
        }
        else
        {
            pre[next_p] = now_day;
            next_p = move[next_p];
            now_day++;
        }
    }
}

int main()
{
    solve();
}
