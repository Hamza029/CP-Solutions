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
#define deb2(a,b) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<endl
#define debv(v) cout<<#v<<" = "; for(auto x: v) {cout<<x<<", ";} cout<<endl;
#define debv2(v) for(int i=0; i<v.size(); i++) {cout<<#v<<"["<<i<<"] = "<<v[i]<<endl;}
#define put(n) cout<<(n)<<endl
#define toDecimal(s) bitset<64>(s).to_ullong()
#define toBinaryStr(n) bitset<64>(n).to_string()
#define toBinary(n) stoll(bitset<64>(n).to_string())

/*
    ---- take notes here ----
    
*/

void print(queue<ll> q, multiset<ll> s)
{
    debv(s);
    cout<<"q = ";
    while(!q.empty()) {cout<<q.front()<<", "; q.pop();} cout<<endl;
}

void solve()
{
    ll qr; cin>>qr;
    queue<ll> q,q1;
    multiset<ll> s;
    ll f=0;
    map<ll,ll> m,m1;
    while(qr--)
    {
        ll cmd; cin>>cmd;
        if(cmd==3)
        {
            // f=sz(s);
            while(!q1.empty())
            {
                if(m1[q1.front()]!=0)
                {
                    m1[q1.front()]--;
                    q1.pop();
                    continue;
                }
                s.insert(q1.front());
                q1.pop();
            }
        }
        else if(cmd==1)
        {
            ll val; cin>>val;
            q.push(val);
            q1.push(val);
            // s.insert(val);
        }
        else
        {
            // if(f!=0)
            if(!s.empty())
            {
                // f--;
                auto it=s.begin();
                m[*it]++;
                cout<<*it<<endl;
                s.erase(it);
            }
            else
            {
                while(!q.empty() && m[q.front()]!=0)
                {
                    m[q.front()]--;
                    q.pop();
                }
                if(!q.empty())
                {
                    // auto it=s.find(q.front());
                    // s.erase(it);
                    m1[q.front()]++;
                    cout<<q.front()<<endl;
                    q.pop();
                }
            }
        }
        // print(q,s);
    }
}

int main()
{
    FAST
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();    
    }

    return 0;
}