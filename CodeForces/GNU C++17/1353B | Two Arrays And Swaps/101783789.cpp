#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define read(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
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
 
void solve()
{
 ll n, k;
 cin >> n >> k;
 vector <ll> a, b;
 read(a, n);
 read(b, n);
 srt(a);
 rsrt(b);
 ll sum = 0;
 for(ll i=0, cnt=0; i<n; i++)
 {
  if(i<k) sum += max(a[i], b[cnt++]);
  else sum += a[i];
 }
 cout << sum << endl;
 return;
}
 
int main()
{
 int t;
 cin >> t;
 while(t--)
 {
  solve(); 
 }
 
 return 0;
}