#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define read(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
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
	ll h, w;
	cin >> h >> w;

	ll sum = 0;
	ll _min = inf;

	ll ara[h][w];

	for(ll i = 0; i < h; i++)
	{
		for(ll j = 0; j < w; j++)
		{
			cin >> ara[i][j];
			_min = min(_min, ara[i][j]);
		}
	}

	for(ll i = 0; i < h; i++)
	{
		for(ll j = 0; j < w; j++)
		{
			if(ara[i][j] > _min)
			{
				sum += (ara[i][j] - _min);
			}
		}
	}

	cout << sum << endl;

	return 0;
}