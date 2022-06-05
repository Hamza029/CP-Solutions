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
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoi(bitset<64>(n).to_string())

int getVal()
{
    int h,m;
    string s;
    int res;
    char ch;
    cin>>h>>ch>>m>>s;
    res = (h*100)+(m);
    if(s=="AM" && h==12) res-=1200;
    if(s=="PM" && h!=12) res+=1200;
    return res;
}

void solve()
{
    int tt,t1,t2;
    tt = getVal();
    int n; cin>>n;
    vii v;
    rep(i,0,n)
    {
        int h,m;
        string s1,s2;
        int res;
        char ch;

        cin>>h>>ch>>m>>s1;
        res = (h*100)+(m);
        if(s1=="AM" && h==12) res-=1200;
        if(s1=="PM" && h!=12) res+=1200;

        t1=res;

        cin>>h>>ch>>m>>s2;
        res = (h*100)+(m);
        if(s2=="AM" && h==12) res-=1200;
        if(s2=="PM" && h!=12) res+=1200;

        t2=res;

        if(s1==s2 && t2<t1) {v.pb(1);continue;}
        //cout<<t1<<" "<<tt<<" "<<t2<<endl;
        if(tt>=t1 && tt<=t2) v.pb(1);
        else v.pb(0);
    }
    rep(i,0,n) cout<<v[i]; cout<<endl;
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