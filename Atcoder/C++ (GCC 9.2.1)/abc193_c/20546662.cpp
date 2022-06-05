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

bool isPow(int n, int po) 
{
    int x1 = log(n)/log(po); 
    double x2 = log(n)/log(po); 
    return x1==x2; 
}

void solve()
{
	ll n; cin>>n;
	ll cnt=n;
	map<ll,ll> mark;
	/*rep2(i,2,n)
	{
		ll j=i;
		if(mark[j]==1) continue;
		while(j*i<=n)
		{
			j*=i;
			if(mark[j]==0) cnt--;
			mark[j]=1;
		}
	}
	//cout<<n<<"--";
	cout<<cnt<<endl;*/
	/*set<ll> st;
	rep2(i,2,n)
	{
		if(st.count(i)>0) continue;
		rep2(j,2,n)
		{
			if(pow(i,j)>n) break;
			st.insert(pow(i,j));
		}
	}
	cout<<n-st.size()<<endl;*/

	for(ll i=2; i*i<=n; i++)
	{
		ll j=i;
		while(j*i<=n)
		{
			j*=i;
			if(mark[j]==0) cnt--;
			else break;
			mark[j]=1;
		}
	}
	cout<<cnt<<endl;

}

int main()
{
	//FAST
	int t = 1;
	//cin >> t;
	while(t--)
	{
		solve();	
	}

	return 0;
}