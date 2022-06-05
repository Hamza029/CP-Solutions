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
#define MOD 998244353
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define inf 1000000000000000000
#define ninf -1000000000000000000
#define memo(x,val) memset(x,val,sizeof(x))
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())

ll MakeOneBit(ll decimalvalue, ll pos)  { return (decimalvalue | (1 << pos));}    //make pos bit of value 1
ll MakeZeroBit(ll decimalvalue, ll pos) {return (decimalvalue & ~(1 << pos));}    //make pos of value bit 0
ll FlipBit(ll decimalvalue, ll pos)     { return (decimalvalue ^ (1 << pos));}    //flip pos bit of value reverse
bool CheckBit(ll decimalvalue, ll pos) { return (decimalvalue & (1 << pos)); }
ll MSB(ll k)  { return ( 63 - __builtin_clzll(k));}    // leftmost set bit
ll LSB(ll k)  { return __builtin_ffs(k)-1 ;}    // right most set bit
ll Totalset(ll decimalvalue)  {return __builtin_popcountll(decimalvalue); }   //total 1 in value
 
ll Totalnotset(ll decimalvalue) { return MSB(decimalvalue) - Totalset(decimalvalue) + 1;}    //total 0 in value
bool ispow2(ll i) { return i&&(i&-i)==i; }

// debugging

#define deb(n) cout<<"--"<<(n)<<"--"<<endl
#define debx(x) cout << #x << " = " << (x) << endl
#define deb2(a,b) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<endl
#define deb3(a,b,c) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<endl
#define debv(v) cout<<#v<<" = "; for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(int i=0; i<v.size(); i++) {cout<<#v<<"["<<i<<"] = "<<v[i]<<endl;}

template<typename... T>
void debm(T&&... args) {
    ((cout << args << ", "), ...);
    cout << endl;
}

/*
    ---- take notes here ----
    
*/

ll calc(ll n, bool f)
{
    ll dig=0;
    ll tmp=n;
    while(tmp)
    {
        tmp/=10;
        dig++;
    }

    ll d=dig;

    ll x=9;
    ll y=0;
    ll ret=0;

    if(f) d++;

    while(d>1)
    {
        y*=10;
        y+=9;

        if(x==9)
        {
            ret+=((9*10)/2);
        }
        else
        {
            ll x1=x;
            ll x2=x+1;
            // deb2(x1,x2);
            if(x1%2==0) x1/=2;
            else x2/=2;
            x1%=MOD;
            x2%=MOD;
            ll s=x1*x2;
            s%=MOD;
            ret+=s;
        }

        ret%=MOD;

        d--;

        x*=10;
    }

    // deb2(x,y);

    if(f) return ret;

    ll x1=n-y;
    ll x2=n-y+1;
    // deb3(x1,x2,ret);
    if(x1%2==0) x1/=2;
    else x2/=2;
    // deb2(x1,x2);
    x1%=MOD;
    x2%=MOD;
    ll s=x1*x2;
    s%=MOD;
    ret+=s;

    ret%=MOD;

    return ret;
}

void solve()
{
    ll n; cin>>n;
    ll tmp=n;
    bool f=1;
    while(tmp)
    {
        if(tmp%10!=9)
        {
            f=0;
            break;
        }
        tmp/=10;
    }

    ll ans=calc(n,f);

    cout<<ans<<endl;
}

int main()
{
    // FAST
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();    
    }

    return 0;
}