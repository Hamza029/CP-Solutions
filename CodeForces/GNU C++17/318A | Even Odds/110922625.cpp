#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
    ll n,k;
    cin>>n>>k;
    ll x=(ll)ceil(n/2.0);
    if(k<=x)
    {
        cout<<k*2-1<<endl;
    }
    else
    {
        cout<<(k-x)*2<<endl;
    }
}