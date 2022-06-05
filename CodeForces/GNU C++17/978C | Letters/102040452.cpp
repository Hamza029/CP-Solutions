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
#define vll vector <ll>
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
 
void solve()
{
 ll n, m;
 cin >> n >> m;
 vll v1, v2;
 rep(i, 0, n)
 {
  ll val; cin >> val;
  if(i>0) v1.pb(val+v1[i-1]);
  else v1.pb(val);
 }
 read(v2, m);
 for(auto i: v2)
 {
  auto it = lower_bound(all(v1), i);
  ll idx = it-v1.begin();
  cout << idx+1 << " ";
  ll rooms;
  if(idx>0) rooms = *(it-1);
  else rooms = 0;
  cout << i-rooms << endl;
 }
}
 
int main()
{
 solve();
 
 return 0;
}