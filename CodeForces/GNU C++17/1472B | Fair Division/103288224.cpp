#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define pi 2*acos(0.0)
#define readl(v,n) for(ll i=0;i<n;i++) {ll val; cin>>val; v.pb(val);}
#define readi(v,n) for(int i=0;i<n;i++) {int val; cin>>val; v.pb(val);}
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define MIN(v) *min_element(v.begin(), v.end());
#define MAX(v) *max_element(v.begin(), v.end());
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
#define toBinaryStr(n) bitset<8>(n).to_string()
#define toBinary(n) stoi(bitset<8>(n).to_string())
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
     ll n;
        cin>>n;
        ll os=0,tos=0,sum=0;
        for(ll i=0;i<n;i++)
        {
            ll val;cin>>val;
            sum+=val;
            if(val==1)
            {
                os++;
            }
            else
            {
                tos++;
            }
 
        }
        if(os==0 || tos==0)
        {
 
            if(sum%2==1)
            {
                cout<<"NO"<<endl;
            }
            else{
                if(n%2==1)
                {
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
        }
        else if(os==tos)
        {
            if(sum%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(os!=tos)
        {
            if(sum%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}