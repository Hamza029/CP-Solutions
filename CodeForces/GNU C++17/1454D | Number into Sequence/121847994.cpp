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
#define M 100000
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
 
vector <ll> primes;
bool marked[M+5];
//bitset<M+5> marked;
ll len;
 
void sieve()
{
    marked[0]=marked[1]=1;
    for(ll i = 2; i*i <= M; i++)
    {
        if(!marked[i])
        {
            for(ll j = i*i; j <= M; j += i)
            {
                marked[j]=1;
            }
        }
    }
 
    primes.push_back(2);
    for(ll i = 3; i <= M; i+=2)
    {
        if(!marked[i])
        {
            primes.push_back(i);
        }
    }
    len=sz(primes);
}
 
// for prime factorization of N, store prime numbers upto sqrt(N) inclusive
// len = primes.size()
void primeFactorization(ll n, map<ll,ll> &m)
{
    // vll v;
    // for(ll i=0; primes[i]*primes[i]*primes[i]<=8*n && i<len; i++)
    for(ll i=0; primes[i]*primes[i]<=n && i<len; i++)
    {
        if(n%primes[i]==0)
        {
            // v.pb(primes[i]);
            while(n%primes[i]==0) m[primes[i]]++,n/=primes[i];
        }
    }
    // if(n>1) v.pb(n);
    if(n>1) m[n]++;
}
 
void solve()
{
    ll n; cin>>n;
    map<ll,ll> m;
    primeFactorization(n,m);
    ll maxxOccur=0,maxx=0;
    for(auto x: m)
    {
        if(x.ss>maxxOccur)
        {
            maxxOccur=x.ss;
            maxx=x.ff;
        }
    }
    if(maxxOccur==1)
    {
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    cout<<maxxOccur<<endl;
    ll tmp=maxxOccur-1;
    while(tmp--) {cout<<maxx<<" "; n/=maxx;}
    cout<<n<<endl;
}
 
int main()
{
    FAST
    sieve();
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();    
    }
 
    return 0;
}