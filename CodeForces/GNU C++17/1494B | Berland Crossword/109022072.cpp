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
 
void solve()
{
 ll n; cin>>n;
 bool ok=1;
 ll u,r,d,l; cin>>u>>r>>d>>l;
 ll u1=u,r1=r,d1=d,l1=l;
 
 if(u==n) r1--,l1--;
 if(r==n) u1--,d1--;
 if(d==n) r1--,l1--;
 if(l==n) u1--,d1--;
 
 if(u==n-1)
 {
  if(r1>l1) r1--;
  else l1--;
 }
 if(d==n-1)
 {
  if(r1>l1) r1--;
  else l1--;
 }
 if(r==n-1)
 {
  if(u1>d1) u1--;
  else d1--;
 }
 if(l==n-1)
 {
  if(u1>d1) u1--;
  else d1--;
 }
 
 if(u1<0||r1<0||d1<0||l1<0) put("no")
 else put("yes")
}
 
int main()
{
 int t = 1;
 cin >> t;
 while(t--)
 {
  solve(); 
 }
 
 return 0;
}