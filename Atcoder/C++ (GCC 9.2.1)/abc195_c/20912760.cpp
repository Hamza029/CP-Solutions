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
	ll n,ka=10,nz=1,ans=0;cin>>n;ll ke=0;
  
	if(n<1000)
	{
		cout<<0<<endl;
		return;
	}

	if(n>10)
	{
		rep(i,0,16)
		{
		  if(n/10<ka)
		  {
		    ke=i+1;break;
		  }
		  else ka*=10;
		}
	}
	if(ke==0)nz=0;
	else
	{
		rep(i,0,ke)nz*=10;
	}
	ans+=(ke/3)*(n-nz+1);
	nz=nz*9/10;ke--;
	rep(i,0,20)
	{
		if(ke<2)break;
		ans+=(ke/3)*(nz);
		ke--;nz/=10;
	}
	cout<<ans<<endl;
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