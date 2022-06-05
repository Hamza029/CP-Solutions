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
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())
 
/*
 ---- take notes here ----
 
*/
 
void solve(int n, int k)
{
 vii v;
 for(int i=k+1; i<=n; i++) v.pb(i);
 //for(auto x: v) cout<<x<<" "; cout<<endl;
 int i=1;
 int sum=0;
 while(sum+i<k && i<=n) 
 {
  v.pb(i);
  sum+=i;
  i++;
 }
 cout<<v.size()<<endl;
 if(v.size()>0) {for(auto x: v) cout<<x<<" "; cout<<endl;}
}
 
void solve2()
{
 int n,k; cin>>n>>k;
 if(k>n*(n+1)/2)
 {
  cout<<n<<endl;
  for(int i=1; i<=n; i++)
  {
   cout<<i<<" ";
  }
  cout<<endl;
  return;
 }
 if(k>n)
 {
  solve(n,k);
  return;
 }
 int k1;
 if(k%2==0) k1=k/2;
 else k1=k/2+1;
 vii v;
 for(int i=k1; i<=n; i++)
 {
  if(i!=k) v.pb(i);
 }
 cout<<v.size()<<endl;
 if(v.size()>0) {for(auto x: v) cout<<x<<" "; cout<<endl;}
}
 
int main()
{
 int t = 1;
 cin >> t;
 while(t--)
 {
  solve2(); 
 }
 
 return 0;
}