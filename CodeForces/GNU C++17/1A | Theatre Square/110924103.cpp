#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll x=n/a;
    ll y=m/a;
 
    bool nf=0,mf=0;
    if(n%a!=0) nf=1;
    if(m%a!=0) mf=1;
 
    ll ans=x*y;
 
    if(nf && mf)
    {
        ans+=(m/a);
        ans+=(n/a);
        ans+=1;
    }
    else if(nf)
    {
        ans+=(m/a);
    }
    else if(mf)
    {
        ans+=(n/a);
    }
    cout<<ans<<endl;
}