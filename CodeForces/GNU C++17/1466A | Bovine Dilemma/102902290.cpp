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
#define rep2(i, a, b) for(ll i = (a); i <= (b); i++)
#define vll vector <ll>
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
#define toBinaryStr(n) bitset<8>(n).to_string()
#define toBinary(n) stoi(bitset<8>(n).to_string())
 
void solve()
{
 int n;
 cin >> n;
 vector <int> v;
 rep(i,0,n)
 {
  int val;
  cin >> val;
  v.pb(val);
 }
 srt(v);
 int ans = 0;
 set <double> st;
 rep(i,0,n-1)
 {
  rep(j,i+1,n)
  {
   double a = abs(v[j]-1);
   double b = abs(v[i]-1);
   double c = abs(v[i]-v[j]);
   double a1 = min(a,min(b,c));
   double b1, c1;
   if(a == a1) b1 = b, c1 = c;
   else if(b == a1) b1 = a, c1 = c;
   else if(c == a1) b1 = b, c1 = a;
   if(a1 < b1 + c1)
   {
    double area = .5*(v[i]-v[j]);
    st.insert(area);
   }
  }
 }
 for(auto it = st.begin(); it != st.end(); it++) ans++;
 cout << ans << endl;
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