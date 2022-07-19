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
#define memo(x,val) memset(x,val,sizeof(x))
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())

// debugging

#define deb(n) cout<<"--"<<(n)<<"--"<<endl
#define debx(x) cout << #x << " = " << (x) << endl
#define deb2(a,b) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<endl
#define deb3(a,b,c) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<endl
#define debv(v) cout<<#v<<" = "; for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(int i=0; i<v.size(); i++) {cout<<#v<<"["<<i<<"] = "<<v[i]<<endl;}

template<typename... T>
void debm(T&&... args) {
    ((cout << args << ", "), ...);
    cout << endl;
}

/*
    ---- take notes here ----
    
*/

const ll N=200005;

ll pref[N];

ll query(ll i, ll j)
{
	if(i<0) return 0;
	if(i==0) return pref[j];
	return pref[j]-pref[i-1];
}

void solve()
{
    ll n,q; cin>>n>>q;
    vll v; readl(v,n);

    sort(all(v));

    pref[0]=v[0];

    for(ll i=1; i<n; i++)
    {
    	pref[i]=pref[i-1]+v[i];
    }

    // debv(v);
    // vll vec(pref,pref+n);
    // debv(vec);

    while(q--)
    {
    	ll x; cin>>x;

    	ll i,j;
    	ll ans;

    	auto it=upper_bound(all(v),x);

    	if(it!=v.begin())
    	{
    		it--;

    		i=it-v.begin();
    		j=n-1;

    		ans = abs((i+1)*x - query(0,i)) + abs((j-i)*x - query(i+1,j));
    	}
    	else
    	{
    		i=-1;
    		j=n-1;

    		ans = abs(n*x - query(0,n-1));
    	}

    	// deb3(x,i,j);

    	cout<<ans<<endl;
    }
}

int main()
{
    // FAST

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();    
    }

    return 0;
}