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
	ll n, res = 1;
	vll v;
	cin >> n;
	read(v, n);
	srt(v);
	double lg = 0;
	for(auto i: v) lg += log10(i);
	if(lg > 18.1)
	{
		cout << -1 << endl;
		return;
	}
	for(auto i: v)
	{
		res *= i;
		if(abs(res) > inf)
		{
			cout << -1 << endl;
			return;
		}
	}
	cout << res << endl;
}

int main()
{
	solve();

	return 0;
}