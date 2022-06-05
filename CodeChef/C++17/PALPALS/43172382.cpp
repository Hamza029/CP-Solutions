#include <bits/stdc++.h>

using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define readl(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
#define readi(v,n) for(int i=0;i<n;i++) {int val; cin>>val; v.pb(val);}
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define MIN(v) *min_element(v.begin(), v.end())
#define MAX(v) *max_element(v.begin(), v.end())
#define sz(x) ((ll) (x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(ll i = (a); i < (b); i++)
#define rep2(i, a, b) for(ll i = (a); i <= (b); i++)
#define vll vector <ll>
#define vii vector <int>
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
#define deb2(a,b) cout<<(a)<<"----"<<(b)<<endl;
#define put(n) cout<<(n)<<endl;
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())

/*
	---- take notes here ----
	
*/

void solve()
{
	string s; cin>>s;
	srt(s);
	map<char,ll> m;
	for(auto x: s) m[x]++;
	ll evens=0,ones=0,odds=0;
	for(auto x: m)
	{
		if(x.ss%2==0)
		{
			evens+=x.ss;
		}
		else if(x.ss!=1)
		{
			odds+=(x.ss-3);
		}
		if(x.ss==1)
		{
			ones++;
		}
	}
	if(evens/2>=ones)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		ones-=(evens/2);
		//deb(ones)
		if(odds/2>=ones)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}

int main()
{
	//FAST
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();	
	}

	return 0;
}