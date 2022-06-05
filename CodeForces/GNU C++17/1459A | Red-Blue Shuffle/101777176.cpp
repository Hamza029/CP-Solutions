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
 
int main()
{
 int t;
 cin >> t;
 while(t--)
 {
  ll n, red = 0, blue = 0;
  cin >> n;
  string r, b;
  cin >> r;
  cin >> b;
 
  for(ll i = 0; i < n; i++)
  {
   if(r[i]-'1'+1 > b[i]-'1'+1)
   {
    red++;
   }
   else if(r[i]-'1'+1 < b[i]-'1'+1)
   {
    blue++;
   }
  }
 
  if(red > blue) cout << "RED" << endl;
  else if(red < blue) cout << "BLUE" << endl;
  else if(red == blue) cout << "EQUAL" << endl;
  //cout << r << " " << b << endl;
 }
 
 return 0;
}