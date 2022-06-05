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
 ll n, k;
 cin >> n >> k;
 bool even=0;
 ll n1=(k-1)*1, n2=(k-1)*2;
 if((n-n2)%2==0 && n-n2>0) even=1;
 else if((n-n1)%2!=0 && n-n1>0) even=0;
 else
 {
  cout << "NO" << endl;
  return;
 }
 cout << "YES" << endl;
 ll in;
 if(even) in = 2;
 else in = 1;
 for(int i=in, cnt=0; cnt<k-1; cnt++)
 {
  cout << i << " ";
 }
 if(even) cout << n-n2;
 else cout << n-n1;
 cout << endl;
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