#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
	if(a%b==0) return b;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
	return ((a*b)/gcd(a, b));
}

int main()
{
	ll N;
	cin >> N;
	ll res = 2;

	for(ll i = 3; i <= N; i++)
	{
		res = lcm(res, i);
	}

	res += 1;
	cout << res << endl;
	
}