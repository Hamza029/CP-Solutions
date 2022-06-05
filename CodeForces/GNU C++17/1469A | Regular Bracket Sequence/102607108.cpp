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
#define deb cout<<"....."<<endl
 
void solve()
{
    string s;
    cin >> s;
    int len = s.length();
    int mark[len] = {0};
    int c1 = 0, c2 = 0, cnt = 0, ct = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == '?') ct++;
        else if(s[i] == ')')
        {
            bool f = 0;
            for(int j = 0; j < i; j++)
            {
                //cout << mark[j] << endl;
                if((s[j] == '?' || s[j] == '(') && mark[j] == 0)
                {
                    mark[j]=1;
                    f = 1;
                    break;
                }
            }
            if(!f)
            {
                //deb;
                cout << "NO" << endl;
                return;
            }
        }
        else if(s[i] == '(')
        {
            bool f = 0;
            rep(j,i+1,len)
            {
                if((s[j] == '?' || s[j] == ')') && mark[j] == 0)
                {
                    mark[j]=1;
                    f = 1;
                    break;
                }
            }
            if(!f)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(ct%2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
 
 
 
 
 
 
 
 