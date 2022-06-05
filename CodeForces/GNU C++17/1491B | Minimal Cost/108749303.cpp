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
 
/*
 ---- take notes here ----
 
*/
 
void solve()
{
 ll n,u,v; cin>>n>>u>>v;
 vll m(n+1);
 rep2(i,1,n)
 {
  ll x; cin>>x;
  m[i]=x;
 }
 bool one=0,more=0,same=1;
 for(ll i=1; i<=n-1; i++)
 {
  if(abs(m[i]-m[i+1])==1)
  {
   one=1;
   same=0;
  }
  else if(abs(m[i]-m[i+1])>=2)
  {
   more=1;
   same=0;
  }
 }
 if(same)
 {
  cout<<min(u+v,v+v)<<endl;
 }
 else if(more)
 {
  cout<<0<<endl;
 }
 else
 {
  cout<<min(u,v)<<endl;
 }
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