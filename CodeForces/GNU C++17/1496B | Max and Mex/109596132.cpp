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
#define deb(n) cout<<"--"<<(n)<<"--"<<endl
#define debx(x) cout << #x << " = " << (x) << endl
#define deb2(a,b) cout<<(a)<<"----"<<(b)<<endl
#define debv(v) for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
 ---- take notes here ----
 
*/
 
void solve()
{
 ll n,k; cin>>n>>k;
 set<ll> s;
 
 //check if present
 bool zero=0,allpre=0,midab=0;
 
 ll minn=0,maxx=-1;
 
 rep(i,0,n)
 {
  ll val; cin>>val;
  s.insert(val);
  //if(val==minn) minn--;
  if(val>maxx) maxx=val;
 }
 
 if(k<=0)
 {
  cout<<s.size()<<endl;
  return;
 }
 
 auto it=s.begin();
 while(*it==minn) minn++,it++;
 
 ll ans=s.size();
 
 if(ans==n && maxx==n-1)
 {
  ans+=k;
  cout<<ans<<endl;
  return;
 }
 else
 {
  ll val=ceil((minn+maxx)/2.0);
  if(!s.count(val)) ans++;
  cout<<ans<<endl;
 }
 
 
 /*
 ll frst=*(s.begin());
 debx(frst);
 
 if(*(s.begin())!=0);
 {
  ll val=ceil(lst/2.0);
  if(!s.count(val)) ans++;
  cout<<ans<<endl;
  deb(val);
  return;
 }
 if(ans==n && lst==n-1)
 {
  ans+=k;
  cout<<ans<<endl;
  return;
 }
 
 //{
  ll val=ceil((minn+lst)/2.0);
  if(!s.count(val)) ans++;
  cout<<ans<<endl;
  return;
 //}
 */
 
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