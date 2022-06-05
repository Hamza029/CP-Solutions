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
 
ll getCnt(string s)
{
 int len = s.length();
 int cnt = 0;
 for(int i = 0; i < len-1; i++)
 {
  if(s[i] == s[i+1]) cnt++;
 }
 //cout << s << endl;
 return cnt;
}
 
void solve()
{
 int n;
 cin >> n;
 string s;
 cin >> s;
 
 int cnt = getCnt(s);
 
 cout << ceil(cnt/2.0) << endl;
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