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

bool octno(ll n)
{
	while(n)
	{
		if(n%8==7)
		{
			return false;
		}
		n /= 8;
	}
	return true;
}

bool decno(ll n)
{
	while(n)
	{
		if(n%10==7)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}

int main()
{
	ll n, cnt;
	cin >> n;
	cnt = n;


	for(ll i = 1; i <= n; i++)
	{
		if(!octno(i))
		{
			cnt--;
			//cout << i << endl;
		}
		else if(!decno(i))
		{
			cnt--;
			//cout << i << endl;
		}
	}

	cout << cnt << endl;

	return 0;
}