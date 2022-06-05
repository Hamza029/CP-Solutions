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
#define deb(n) cout<<"--"<<(n)<<"--"<<endl
#define debx(x) cout << #x << " = " << (x) << endl
#define deb2(a,b) cout<<(a)<<"----"<<(b)<<endl
#define debv(v) for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())

/*
	---- take notes here ----
	
*/

void solve()
{
	string s; cin>>s;
	ll len=s.length();
	ll len1=len;
	ll last=0,first=0;
	while(s[len-1]=='0' && len>=0) len--,last++;
	len=len1;
	ll i=0;
	while(s[i]=='0' && i<len) i++,first++;
	if(first>last)
	{
		cout<<"No"<<endl;
		return;
	}
	ll lagbe=last-first;
	while(lagbe--) s="0"+s;
	//debx(s);
	len=s.length();
	ll n=len/2;
	for(ll i=0,j=len-1; i<n; i++,j--)
	{
		if(s[i]!=s[j])
		{
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
	return;
}

int main()
{
	int t = 1;
	//cin >> t;
	while(t--)
	{
		solve();	
	}

	return 0;
}