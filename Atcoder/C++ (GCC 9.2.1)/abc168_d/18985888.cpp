#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define read(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
#define rep(i, a, b) for(ll i = (a); i < (b); i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define pii pair <int, int>
#define pll pair <ll, ll>
#define M 10000007
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define inf 1e18
#define ninf -1e18
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<8>(n).to_string()
#define toBinary(n) stoi(bitset<8>(n).to_string())

int main()
{
	int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    rep (i,0,m)
    {
        int a,b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    vector<int> d(n+1,-1);
    queue<int> que;
    que.push(1);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
 
        for(int nv : g[v])
        {
            if (d[nv] != -1) continue;
            d[nv] = v;
            que.push(nv);
        }
    }
    cout << "Yes" << endl;
    rep (i,0,n-1)
    {
        cout << d[i+2] << endl;
    }

	return 0;
}