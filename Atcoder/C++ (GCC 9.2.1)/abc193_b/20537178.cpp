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
	Ai mins to walk
	Pi yen
	Xi stock
	x.ff.ff x.ff.ss x.ss
*/

#define plll pair<pair<ll,ll>,ll>

bool cmp(plll a, plll b)
{
	return a.ff.ss < b.ff.ss;
}

void solve()
{
	ll n; cin>>n;
	vector<plll> v;
	rep(i,0,n)
	{
		ll f,s,t; cin>>f>>s>>t;
		v.pb(mp(mp(f,s),t));
	}
	sort(all(v),cmp);
	//for(auto x: v) cout<<x.ff.ff<<" "<<x.ff.ss<<" "<<x.ss<<endl; cout<<endl;
	ll i=0;
	while(v[i].ss<=v[i].ff.ff && i<n) i++;
	if(i!=n) cout<<v[i].ff.ss<<endl;
	else cout<<-1<<endl;
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