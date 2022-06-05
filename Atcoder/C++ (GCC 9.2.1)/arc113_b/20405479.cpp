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

vll s[10];

ll powm(ll a,ll n,ll x)
{
	a = a%x;
	ll r = 1;
	while(n > 0)
	{
		if(n&1) r = (r * a) % x;
	    a = (a * a) % x;
	    n >>= 1;
	}
	return r;
}

void solve()
{
	ll a,b,c; cin>>a>>b>>c;
	ll dig=a%10;
	vll vv=s[dig];
	ll m=sz(vv);
	ll res=powm(b,c,m)%m;
	res--;
	res+=m;
	res%=m;
	cout<<vv[res]<<endl;
}

int main()
{
	rep2(i,0,9)
	{
	    int k=i*i;
	    s[i].pb(i);
	    while(k%10!=i) 
	    {
	    	s[i].pb(k%10),k*=i;
	    }
  	}
	int t = 1;
	//cin >> t;
	while(t--)
	{
		solve();	
	}

	return 0;
}