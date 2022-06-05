#include <bits/stdc++.h>

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
#define inf 1000000000000000000
#define ninf -1000000000000000000
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<8>(n).to_string()
#define toBinary(n) stoll(bitset<8>(n).to_string())

void solve()
{
    ll n;
    cin >> n;
    ll res = 0;
    rep(i, 2, 1000010)
    {
	    ll curr = 0;
	    while(n%i == 0)
	    {
	    	curr++;
	    	n /= i;
	    }
	    rep(j, 1, 10000)
	    {
	    	if(curr < j) break;
	    	res++;
	    	curr -= j;
	    }
    }
    if(n > 1) res++;
    cout << res << endl;
}

int main()
{
	solve();

	return 0;
}