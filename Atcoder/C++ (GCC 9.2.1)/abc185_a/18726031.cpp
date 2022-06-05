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
	vector <int> vec(4);
	int n = 4;
	for(int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	cout << vec[0] << endl;

	return 0;
}