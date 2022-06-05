#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi 2*acos(0.0)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define M 10000007
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

int main()
{
	ll n1, n , m, t;
	ll f, s;
	ll cnt = 0;
	vector <pll> vec;
	cin >> n >> m >> t;
	n1 = n;
	for(ll i = 0; i < m; i++)
	{
		cin >> f >> s;
		vec.pb(pll(f, s));
	}

	for(ll i = 0; i < m; i++)
	{
		n = n - (vec[i].ff - cnt);
		if(n <= 0) break;
		ll diff = vec[i].ss - vec[i].ff;
		while(n < n1 && diff != 0) n++, diff--;
		cnt = vec[i].ss;
		//cout << n << "-" << endl;
	}

	ll diff1 = t - cnt;
	n = n - diff1;
	//cout << n << endl;
	
	if(n > 0) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}