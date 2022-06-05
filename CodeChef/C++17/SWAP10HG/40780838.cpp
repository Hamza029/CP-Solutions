#include<bits/stdc++.h>

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
#define vll vector <ll>
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

/*void swapChar(string &s)
{

}*/

void solve()
{
    ll n;
    cin >> n;
    string s, p;
    cin >> s; cin >> p;
    //ll s1=0, p1=0;
    rep(i,0,n)
    {
        if(s[i] != p[i] && s[i] == '1')
        {
            ll idx=-1;
            rep(j,i+1,n)
            {
                if(s[j]=='0' && s[j] != p[j])
                {
                    idx = j;
                    break;
                }
                //cout << s[j] << " ";
            }
            //cout << endl;
            if(idx == -1)
            {
                cout << "No" << endl;
                return;
            }
            s[i] = '0';
            s[idx] = '1';
        }
    }
    if(s == p) cout << "Yes" << endl;
    else cout << "No" << endl;
    //cout << s << endl;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
        solve();
}





