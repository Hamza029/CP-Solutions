#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi 2*acos(0.0)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define M 10000007
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

ll res[300][15];
  
ll getRes(ll n,ll r)
{
    if(n==r) return 1;
    if(r==1) return n;
    ll &ret=res[n][r];
    if(ret!=-1) return ret;
    ret=getRes(n-1,r-1)+getRes(n-1,r);
    return ret;
} 

int main()
{
    ll n;
    cin>>n;
    memset(res,-1,sizeof res);

    cout<<getRes(n-1,11)<<"\n";
}