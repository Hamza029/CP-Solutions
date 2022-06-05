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
#define sz(x) ((int) (x).size())
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
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoi(bitset<64>(n).to_string())
 
/*
 ---- take notes here ----
 
*/
 
void solve()
{
 ll n; cin>>n;
 ll c0,c1,c2;
 ll avg = n/3;
 ll cnt=0;
 c0=c1=c2=0;
 rep(i,0,n)
 {
  ll x; cin>>x;
  if(x%3==0) c0++;
  else if(x%3==1) c1++;
  else if(x%3==2) c2++;
 
  if(c0>avg)
  {
   c0--;
   if(c1<avg)
   {
    c1++;
    cnt++;
   }
   else
   {
    c2++;
    cnt+=2;
   }
  }
  else if(c1>avg)
  {
   c1--;
   if(c2<avg)
   {
    c2++;
    cnt++;
   }
   else
   {
    c0++;
    cnt+=2;
   }
  }
  else if(c2>avg)
  {
   c2--;
   if(c0<avg)
   {
    c0++;
    cnt++;
   }
   else
   {
    c1++;
    cnt+=2;
   }
  }
 }
 cout<<cnt<<endl;
}
 
int main()
{
 FAST
 int t = 1;
 cin >> t;
 while(t--)
 {
  solve(); 
 }
 
 return 0;
}