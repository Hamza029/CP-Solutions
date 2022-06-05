#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		ll a, b;
		cin >> a >> b;

		ll odd_a, even_a, odd_b, even_b, total;

		if(a % 2 == 1) odd_a = a/2 + 1;
		else odd_a = a/2;
		even_a = a/2;

		if(b % 2 == 1) odd_b = b/2 + 1;
		else odd_b = b/2;
		even_b = b/2;

		total = (odd_a * odd_b) + (even_a * even_b);

		cout << total << endl;
	}
}