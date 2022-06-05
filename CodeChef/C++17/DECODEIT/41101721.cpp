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
#define rep2(i, a, b) for(ll i = (a); i <= (b); i++)
#define vll vector <ll>
#define pii pair <int, int>
#define pll pair <ll, ll>
#define M 1000007
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define inf 1000000000000000000
#define ninf -1000000000000000000
#define deb(n) cout<<"--"<<(n)<<"--"<<endl;
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<8>(n).to_string()
#define toBinary(n) stoi(bitset<8>(n).to_string())


void solve()
{
	string letters = "abcdefghijklmnop";
	int n;
	string s;
	cin >> n;
	cin >> s;
	int cnt = 0, x = 16;
	rep(i,0,n)
	{
		x /= 2;
		if(s[i] == '0')
		{
			//x /= 2;
			letters.erase(x, letters.length());
		}
		else
		{
			//x = x/2 + x/4;
			letters.erase(0, x);
		}
		//deb(x);
		cnt++;
		if(cnt == 4)
		{
			cout << letters[x-1];
			x = 16;
			cnt = 0;
			letters = "abcdefghijklmnop";
		}
	}
	cout << endl;
}

int main()
{
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();	
	}

	return 0;
}